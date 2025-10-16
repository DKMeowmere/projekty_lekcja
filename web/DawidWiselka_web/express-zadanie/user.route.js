const express = require('express');
const User = require('./User.model.js'); // import jako wartość domyślna

const router = express.Router();

router.get('/users', async (req, res) => {
  try {
    const users = await User.find();

    let html = `
      <html>
      <head>
        <title>Lista użytkowników</title>
        <style>
          table { border-collapse: collapse; width: 100%; }
          th, td { border: 1px solid #ddd; padding: 8px; }
          th { background-color: #f2f2f2; }
          a { color: blue; text-decoration: none; }
        </style>
      </head>
      <body>
        <h1>Lista użytkowników</h1>
        <table>
          <thead>
            <tr>
              <th>Imię i nazwisko</th>
              <th>Adres</th>
              <th>Strona www</th>
            </tr>
          </thead>
          <tbody>
    `;

    users.forEach(user => {
      const fullAddress = `${user.address.street}, ${user.address.suite}, ${user.address.city}, ${user.address.zipcode}`;
      html += `
        <tr>
          <td>${user.name}</td>
          <td>${fullAddress}</td>
          <td><a href="http://${user.website}" target="_blank">${user.website}</a></td>
        </tr>
      `;
    });

    html += `
          </tbody>
        </table>
      </body>
      </html>
    `;

    res.send(html);
  } catch (err) {
    res.status(500).send('Błąd serwera');
  }
});

module.exports = router;
