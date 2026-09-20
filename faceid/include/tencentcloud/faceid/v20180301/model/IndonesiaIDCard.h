/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INDONESIAIDCARD_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INDONESIAIDCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Indonesian Identity Card
                */
                class IndonesiaIDCard : public AbstractModel
                {
                public:
                    IndonesiaIDCard();
                    ~IndonesiaIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID number
                     * @return NIK ID number
                     * 
                     */
                    std::string GetNIK() const;

                    /**
                     * 设置ID number
                     * @param _nIK ID number
                     * 
                     */
                    void SetNIK(const std::string& _nIK);

                    /**
                     * 判断参数 NIK 是否已赋值
                     * @return NIK 是否已赋值
                     * 
                     */
                    bool NIKHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Nama Name
                     * 
                     */
                    std::string GetNama() const;

                    /**
                     * 设置Name
                     * @param _nama Name
                     * 
                     */
                    void SetNama(const std::string& _nama);

                    /**
                     * 判断参数 Nama 是否已赋值
                     * @return Nama 是否已赋值
                     * 
                     */
                    bool NamaHasBeenSet() const;

                    /**
                     * 获取Birthplace/Date of birth
                     * @return TempatTglLahir Birthplace/Date of birth
                     * 
                     */
                    std::string GetTempatTglLahir() const;

                    /**
                     * 设置Birthplace/Date of birth
                     * @param _tempatTglLahir Birthplace/Date of birth
                     * 
                     */
                    void SetTempatTglLahir(const std::string& _tempatTglLahir);

                    /**
                     * 判断参数 TempatTglLahir 是否已赋值
                     * @return TempatTglLahir 是否已赋值
                     * 
                     */
                    bool TempatTglLahirHasBeenSet() const;

                    /**
                     * 获取Sex
                     * @return JenisKelamin Sex
                     * 
                     */
                    std::string GetJenisKelamin() const;

                    /**
                     * 设置Sex
                     * @param _jenisKelamin Sex
                     * 
                     */
                    void SetJenisKelamin(const std::string& _jenisKelamin);

                    /**
                     * 判断参数 JenisKelamin 是否已赋值
                     * @return JenisKelamin 是否已赋值
                     * 
                     */
                    bool JenisKelaminHasBeenSet() const;

                    /**
                     * 获取Blood type
                     * @return GolDarah Blood type
                     * 
                     */
                    std::string GetGolDarah() const;

                    /**
                     * 设置Blood type
                     * @param _golDarah Blood type
                     * 
                     */
                    void SetGolDarah(const std::string& _golDarah);

                    /**
                     * 判断参数 GolDarah 是否已赋值
                     * @return GolDarah 是否已赋值
                     * 
                     */
                    bool GolDarahHasBeenSet() const;

                    /**
                     * 获取Address.
                     * @return Alamat Address.
                     * 
                     */
                    std::string GetAlamat() const;

                    /**
                     * 设置Address.
                     * @param _alamat Address.
                     * 
                     */
                    void SetAlamat(const std::string& _alamat);

                    /**
                     * 判断参数 Alamat 是否已赋值
                     * @return Alamat 是否已赋值
                     * 
                     */
                    bool AlamatHasBeenSet() const;

                    /**
                     * 获取Street
                     * @return RTRW Street
                     * 
                     */
                    std::string GetRTRW() const;

                    /**
                     * 设置Street
                     * @param _rTRW Street
                     * 
                     */
                    void SetRTRW(const std::string& _rTRW);

                    /**
                     * 判断参数 RTRW 是否已赋值
                     * @return RTRW 是否已赋值
                     * 
                     */
                    bool RTRWHasBeenSet() const;

                    /**
                     * 获取Village
                     * @return KelDesa Village
                     * 
                     */
                    std::string GetKelDesa() const;

                    /**
                     * 设置Village
                     * @param _kelDesa Village
                     * 
                     */
                    void SetKelDesa(const std::string& _kelDesa);

                    /**
                     * 判断参数 KelDesa 是否已赋值
                     * @return KelDesa 是否已赋值
                     * 
                     */
                    bool KelDesaHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Kecamatan Region.
                     * 
                     */
                    std::string GetKecamatan() const;

                    /**
                     * 设置Region.
                     * @param _kecamatan Region.
                     * 
                     */
                    void SetKecamatan(const std::string& _kecamatan);

                    /**
                     * 判断参数 Kecamatan 是否已赋值
                     * @return Kecamatan 是否已赋值
                     * 
                     */
                    bool KecamatanHasBeenSet() const;

                    /**
                     * 获取Religious belief
                     * @return Agama Religious belief
                     * 
                     */
                    std::string GetAgama() const;

                    /**
                     * 设置Religious belief
                     * @param _agama Religious belief
                     * 
                     */
                    void SetAgama(const std::string& _agama);

                    /**
                     * 判断参数 Agama 是否已赋值
                     * @return Agama 是否已赋值
                     * 
                     */
                    bool AgamaHasBeenSet() const;

                    /**
                     * 获取Marital status
                     * @return StatusPerkawinan Marital status
                     * 
                     */
                    std::string GetStatusPerkawinan() const;

                    /**
                     * 设置Marital status
                     * @param _statusPerkawinan Marital status
                     * 
                     */
                    void SetStatusPerkawinan(const std::string& _statusPerkawinan);

                    /**
                     * 判断参数 StatusPerkawinan 是否已赋值
                     * @return StatusPerkawinan 是否已赋值
                     * 
                     */
                    bool StatusPerkawinanHasBeenSet() const;

                    /**
                     * 获取Occupation
                     * @return Perkerjaan Occupation
                     * 
                     */
                    std::string GetPerkerjaan() const;

                    /**
                     * 设置Occupation
                     * @param _perkerjaan Occupation
                     * 
                     */
                    void SetPerkerjaan(const std::string& _perkerjaan);

                    /**
                     * 判断参数 Perkerjaan 是否已赋值
                     * @return Perkerjaan 是否已赋值
                     * 
                     */
                    bool PerkerjaanHasBeenSet() const;

                    /**
                     * 获取Nationality
                     * @return KewargaNegaraan Nationality
                     * 
                     */
                    std::string GetKewargaNegaraan() const;

                    /**
                     * 设置Nationality
                     * @param _kewargaNegaraan Nationality
                     * 
                     */
                    void SetKewargaNegaraan(const std::string& _kewargaNegaraan);

                    /**
                     * 判断参数 KewargaNegaraan 是否已赋值
                     * @return KewargaNegaraan 是否已赋值
                     * 
                     */
                    bool KewargaNegaraanHasBeenSet() const;

                    /**
                     * 获取Validity period of the ID card
                     * @return BerlakuHingga Validity period of the ID card
                     * 
                     */
                    std::string GetBerlakuHingga() const;

                    /**
                     * 设置Validity period of the ID card
                     * @param _berlakuHingga Validity period of the ID card
                     * 
                     */
                    void SetBerlakuHingga(const std::string& _berlakuHingga);

                    /**
                     * 判断参数 BerlakuHingga 是否已赋值
                     * @return BerlakuHingga 是否已赋值
                     * 
                     */
                    bool BerlakuHinggaHasBeenSet() const;

                    /**
                     * 获取Issue date
                     * @return IssuedDate Issue date
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Issue date
                     * @param _issuedDate Issue date
                     * 
                     */
                    void SetIssuedDate(const std::string& _issuedDate);

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     * 
                     */
                    bool IssuedDateHasBeenSet() const;

                    /**
                     * 获取Province
                     * @return Provinsi Province
                     * 
                     */
                    std::string GetProvinsi() const;

                    /**
                     * 设置Province
                     * @param _provinsi Province
                     * 
                     */
                    void SetProvinsi(const std::string& _provinsi);

                    /**
                     * 判断参数 Provinsi 是否已赋值
                     * @return Provinsi 是否已赋值
                     * 
                     */
                    bool ProvinsiHasBeenSet() const;

                    /**
                     * 获取city
                     * @return Kota city
                     * 
                     */
                    std::string GetKota() const;

                    /**
                     * 设置city
                     * @param _kota city
                     * 
                     */
                    void SetKota(const std::string& _kota);

                    /**
                     * 判断参数 Kota 是否已赋值
                     * @return Kota 是否已赋值
                     * 
                     */
                    bool KotaHasBeenSet() const;

                private:

                    /**
                     * ID number
                     */
                    std::string m_nIK;
                    bool m_nIKHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_nama;
                    bool m_namaHasBeenSet;

                    /**
                     * Birthplace/Date of birth
                     */
                    std::string m_tempatTglLahir;
                    bool m_tempatTglLahirHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_jenisKelamin;
                    bool m_jenisKelaminHasBeenSet;

                    /**
                     * Blood type
                     */
                    std::string m_golDarah;
                    bool m_golDarahHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_alamat;
                    bool m_alamatHasBeenSet;

                    /**
                     * Street
                     */
                    std::string m_rTRW;
                    bool m_rTRWHasBeenSet;

                    /**
                     * Village
                     */
                    std::string m_kelDesa;
                    bool m_kelDesaHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_kecamatan;
                    bool m_kecamatanHasBeenSet;

                    /**
                     * Religious belief
                     */
                    std::string m_agama;
                    bool m_agamaHasBeenSet;

                    /**
                     * Marital status
                     */
                    std::string m_statusPerkawinan;
                    bool m_statusPerkawinanHasBeenSet;

                    /**
                     * Occupation
                     */
                    std::string m_perkerjaan;
                    bool m_perkerjaanHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_kewargaNegaraan;
                    bool m_kewargaNegaraanHasBeenSet;

                    /**
                     * Validity period of the ID card
                     */
                    std::string m_berlakuHingga;
                    bool m_berlakuHinggaHasBeenSet;

                    /**
                     * Issue date
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_provinsi;
                    bool m_provinsiHasBeenSet;

                    /**
                     * city
                     */
                    std::string m_kota;
                    bool m_kotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INDONESIAIDCARD_H_
