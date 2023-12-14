/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/faceid/v20180301/model/IndonesiaIDCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

IndonesiaIDCard::IndonesiaIDCard() :
    m_nIKHasBeenSet(false),
    m_namaHasBeenSet(false),
    m_tempatTglLahirHasBeenSet(false),
    m_jenisKelaminHasBeenSet(false),
    m_golDarahHasBeenSet(false),
    m_alamatHasBeenSet(false),
    m_rTRWHasBeenSet(false),
    m_kelDesaHasBeenSet(false),
    m_kecamatanHasBeenSet(false),
    m_agamaHasBeenSet(false),
    m_statusPerkawinanHasBeenSet(false),
    m_perkerjaanHasBeenSet(false),
    m_kewargaNegaraanHasBeenSet(false),
    m_berlakuHinggaHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_provinsiHasBeenSet(false),
    m_kotaHasBeenSet(false)
{
}

CoreInternalOutcome IndonesiaIDCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NIK") && !value["NIK"].IsNull())
    {
        if (!value["NIK"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.NIK` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nIK = string(value["NIK"].GetString());
        m_nIKHasBeenSet = true;
    }

    if (value.HasMember("Nama") && !value["Nama"].IsNull())
    {
        if (!value["Nama"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Nama` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nama = string(value["Nama"].GetString());
        m_namaHasBeenSet = true;
    }

    if (value.HasMember("TempatTglLahir") && !value["TempatTglLahir"].IsNull())
    {
        if (!value["TempatTglLahir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.TempatTglLahir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempatTglLahir = string(value["TempatTglLahir"].GetString());
        m_tempatTglLahirHasBeenSet = true;
    }

    if (value.HasMember("JenisKelamin") && !value["JenisKelamin"].IsNull())
    {
        if (!value["JenisKelamin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.JenisKelamin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jenisKelamin = string(value["JenisKelamin"].GetString());
        m_jenisKelaminHasBeenSet = true;
    }

    if (value.HasMember("GolDarah") && !value["GolDarah"].IsNull())
    {
        if (!value["GolDarah"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.GolDarah` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_golDarah = string(value["GolDarah"].GetString());
        m_golDarahHasBeenSet = true;
    }

    if (value.HasMember("Alamat") && !value["Alamat"].IsNull())
    {
        if (!value["Alamat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Alamat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alamat = string(value["Alamat"].GetString());
        m_alamatHasBeenSet = true;
    }

    if (value.HasMember("RTRW") && !value["RTRW"].IsNull())
    {
        if (!value["RTRW"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.RTRW` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTRW = string(value["RTRW"].GetString());
        m_rTRWHasBeenSet = true;
    }

    if (value.HasMember("KelDesa") && !value["KelDesa"].IsNull())
    {
        if (!value["KelDesa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.KelDesa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kelDesa = string(value["KelDesa"].GetString());
        m_kelDesaHasBeenSet = true;
    }

    if (value.HasMember("Kecamatan") && !value["Kecamatan"].IsNull())
    {
        if (!value["Kecamatan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Kecamatan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kecamatan = string(value["Kecamatan"].GetString());
        m_kecamatanHasBeenSet = true;
    }

    if (value.HasMember("Agama") && !value["Agama"].IsNull())
    {
        if (!value["Agama"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Agama` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agama = string(value["Agama"].GetString());
        m_agamaHasBeenSet = true;
    }

    if (value.HasMember("StatusPerkawinan") && !value["StatusPerkawinan"].IsNull())
    {
        if (!value["StatusPerkawinan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.StatusPerkawinan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusPerkawinan = string(value["StatusPerkawinan"].GetString());
        m_statusPerkawinanHasBeenSet = true;
    }

    if (value.HasMember("Perkerjaan") && !value["Perkerjaan"].IsNull())
    {
        if (!value["Perkerjaan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Perkerjaan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_perkerjaan = string(value["Perkerjaan"].GetString());
        m_perkerjaanHasBeenSet = true;
    }

    if (value.HasMember("KewargaNegaraan") && !value["KewargaNegaraan"].IsNull())
    {
        if (!value["KewargaNegaraan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.KewargaNegaraan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kewargaNegaraan = string(value["KewargaNegaraan"].GetString());
        m_kewargaNegaraanHasBeenSet = true;
    }

    if (value.HasMember("BerlakuHingga") && !value["BerlakuHingga"].IsNull())
    {
        if (!value["BerlakuHingga"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.BerlakuHingga` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_berlakuHingga = string(value["BerlakuHingga"].GetString());
        m_berlakuHinggaHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (value.HasMember("Provinsi") && !value["Provinsi"].IsNull())
    {
        if (!value["Provinsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Provinsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinsi = string(value["Provinsi"].GetString());
        m_provinsiHasBeenSet = true;
    }

    if (value.HasMember("Kota") && !value["Kota"].IsNull())
    {
        if (!value["Kota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndonesiaIDCard.Kota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kota = string(value["Kota"].GetString());
        m_kotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndonesiaIDCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nIKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NIK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nIK.c_str(), allocator).Move(), allocator);
    }

    if (m_namaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nama";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nama.c_str(), allocator).Move(), allocator);
    }

    if (m_tempatTglLahirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempatTglLahir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempatTglLahir.c_str(), allocator).Move(), allocator);
    }

    if (m_jenisKelaminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JenisKelamin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jenisKelamin.c_str(), allocator).Move(), allocator);
    }

    if (m_golDarahHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GolDarah";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_golDarah.c_str(), allocator).Move(), allocator);
    }

    if (m_alamatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alamat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alamat.c_str(), allocator).Move(), allocator);
    }

    if (m_rTRWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTRW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTRW.c_str(), allocator).Move(), allocator);
    }

    if (m_kelDesaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KelDesa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kelDesa.c_str(), allocator).Move(), allocator);
    }

    if (m_kecamatanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kecamatan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kecamatan.c_str(), allocator).Move(), allocator);
    }

    if (m_agamaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agama";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agama.c_str(), allocator).Move(), allocator);
    }

    if (m_statusPerkawinanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusPerkawinan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusPerkawinan.c_str(), allocator).Move(), allocator);
    }

    if (m_perkerjaanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Perkerjaan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_perkerjaan.c_str(), allocator).Move(), allocator);
    }

    if (m_kewargaNegaraanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KewargaNegaraan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kewargaNegaraan.c_str(), allocator).Move(), allocator);
    }

    if (m_berlakuHinggaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BerlakuHingga";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_berlakuHingga.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_provinsiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provinsi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinsi.c_str(), allocator).Move(), allocator);
    }

    if (m_kotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kota.c_str(), allocator).Move(), allocator);
    }

}


string IndonesiaIDCard::GetNIK() const
{
    return m_nIK;
}

void IndonesiaIDCard::SetNIK(const string& _nIK)
{
    m_nIK = _nIK;
    m_nIKHasBeenSet = true;
}

bool IndonesiaIDCard::NIKHasBeenSet() const
{
    return m_nIKHasBeenSet;
}

string IndonesiaIDCard::GetNama() const
{
    return m_nama;
}

void IndonesiaIDCard::SetNama(const string& _nama)
{
    m_nama = _nama;
    m_namaHasBeenSet = true;
}

bool IndonesiaIDCard::NamaHasBeenSet() const
{
    return m_namaHasBeenSet;
}

string IndonesiaIDCard::GetTempatTglLahir() const
{
    return m_tempatTglLahir;
}

void IndonesiaIDCard::SetTempatTglLahir(const string& _tempatTglLahir)
{
    m_tempatTglLahir = _tempatTglLahir;
    m_tempatTglLahirHasBeenSet = true;
}

bool IndonesiaIDCard::TempatTglLahirHasBeenSet() const
{
    return m_tempatTglLahirHasBeenSet;
}

string IndonesiaIDCard::GetJenisKelamin() const
{
    return m_jenisKelamin;
}

void IndonesiaIDCard::SetJenisKelamin(const string& _jenisKelamin)
{
    m_jenisKelamin = _jenisKelamin;
    m_jenisKelaminHasBeenSet = true;
}

bool IndonesiaIDCard::JenisKelaminHasBeenSet() const
{
    return m_jenisKelaminHasBeenSet;
}

string IndonesiaIDCard::GetGolDarah() const
{
    return m_golDarah;
}

void IndonesiaIDCard::SetGolDarah(const string& _golDarah)
{
    m_golDarah = _golDarah;
    m_golDarahHasBeenSet = true;
}

bool IndonesiaIDCard::GolDarahHasBeenSet() const
{
    return m_golDarahHasBeenSet;
}

string IndonesiaIDCard::GetAlamat() const
{
    return m_alamat;
}

void IndonesiaIDCard::SetAlamat(const string& _alamat)
{
    m_alamat = _alamat;
    m_alamatHasBeenSet = true;
}

bool IndonesiaIDCard::AlamatHasBeenSet() const
{
    return m_alamatHasBeenSet;
}

string IndonesiaIDCard::GetRTRW() const
{
    return m_rTRW;
}

void IndonesiaIDCard::SetRTRW(const string& _rTRW)
{
    m_rTRW = _rTRW;
    m_rTRWHasBeenSet = true;
}

bool IndonesiaIDCard::RTRWHasBeenSet() const
{
    return m_rTRWHasBeenSet;
}

string IndonesiaIDCard::GetKelDesa() const
{
    return m_kelDesa;
}

void IndonesiaIDCard::SetKelDesa(const string& _kelDesa)
{
    m_kelDesa = _kelDesa;
    m_kelDesaHasBeenSet = true;
}

bool IndonesiaIDCard::KelDesaHasBeenSet() const
{
    return m_kelDesaHasBeenSet;
}

string IndonesiaIDCard::GetKecamatan() const
{
    return m_kecamatan;
}

void IndonesiaIDCard::SetKecamatan(const string& _kecamatan)
{
    m_kecamatan = _kecamatan;
    m_kecamatanHasBeenSet = true;
}

bool IndonesiaIDCard::KecamatanHasBeenSet() const
{
    return m_kecamatanHasBeenSet;
}

string IndonesiaIDCard::GetAgama() const
{
    return m_agama;
}

void IndonesiaIDCard::SetAgama(const string& _agama)
{
    m_agama = _agama;
    m_agamaHasBeenSet = true;
}

bool IndonesiaIDCard::AgamaHasBeenSet() const
{
    return m_agamaHasBeenSet;
}

string IndonesiaIDCard::GetStatusPerkawinan() const
{
    return m_statusPerkawinan;
}

void IndonesiaIDCard::SetStatusPerkawinan(const string& _statusPerkawinan)
{
    m_statusPerkawinan = _statusPerkawinan;
    m_statusPerkawinanHasBeenSet = true;
}

bool IndonesiaIDCard::StatusPerkawinanHasBeenSet() const
{
    return m_statusPerkawinanHasBeenSet;
}

string IndonesiaIDCard::GetPerkerjaan() const
{
    return m_perkerjaan;
}

void IndonesiaIDCard::SetPerkerjaan(const string& _perkerjaan)
{
    m_perkerjaan = _perkerjaan;
    m_perkerjaanHasBeenSet = true;
}

bool IndonesiaIDCard::PerkerjaanHasBeenSet() const
{
    return m_perkerjaanHasBeenSet;
}

string IndonesiaIDCard::GetKewargaNegaraan() const
{
    return m_kewargaNegaraan;
}

void IndonesiaIDCard::SetKewargaNegaraan(const string& _kewargaNegaraan)
{
    m_kewargaNegaraan = _kewargaNegaraan;
    m_kewargaNegaraanHasBeenSet = true;
}

bool IndonesiaIDCard::KewargaNegaraanHasBeenSet() const
{
    return m_kewargaNegaraanHasBeenSet;
}

string IndonesiaIDCard::GetBerlakuHingga() const
{
    return m_berlakuHingga;
}

void IndonesiaIDCard::SetBerlakuHingga(const string& _berlakuHingga)
{
    m_berlakuHingga = _berlakuHingga;
    m_berlakuHinggaHasBeenSet = true;
}

bool IndonesiaIDCard::BerlakuHinggaHasBeenSet() const
{
    return m_berlakuHinggaHasBeenSet;
}

string IndonesiaIDCard::GetIssuedDate() const
{
    return m_issuedDate;
}

void IndonesiaIDCard::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool IndonesiaIDCard::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string IndonesiaIDCard::GetProvinsi() const
{
    return m_provinsi;
}

void IndonesiaIDCard::SetProvinsi(const string& _provinsi)
{
    m_provinsi = _provinsi;
    m_provinsiHasBeenSet = true;
}

bool IndonesiaIDCard::ProvinsiHasBeenSet() const
{
    return m_provinsiHasBeenSet;
}

string IndonesiaIDCard::GetKota() const
{
    return m_kota;
}

void IndonesiaIDCard::SetKota(const string& _kota)
{
    m_kota = _kota;
    m_kotaHasBeenSet = true;
}

bool IndonesiaIDCard::KotaHasBeenSet() const
{
    return m_kotaHasBeenSet;
}

