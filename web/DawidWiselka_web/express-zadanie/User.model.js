const mongoose = require('mongoose');

const GeoSchema = new mongoose.Schema({
  lat: String,
  lng: String,
}, { _id: false });

const AddressSchema = new mongoose.Schema({
  street: String,
  suite: String,
  city: String,
  zipcode: String,
  geo: GeoSchema,
}, { _id: false });

const CompanySchema = new mongoose.Schema({
  name: String,
  catchPhrase: String,
  bs: String,
}, { _id: false });

const UserSchema = new mongoose.Schema({
  name: String,
  username: String,
  email: String,
  address: AddressSchema,
  phone: String,
  website: String,
  company: CompanySchema,
});

const User = mongoose.model('User', UserSchema);

module.exports = User;
