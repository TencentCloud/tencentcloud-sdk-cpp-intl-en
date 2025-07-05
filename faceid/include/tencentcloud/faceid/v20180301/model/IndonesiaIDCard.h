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
                * Indonesia ID card.
                */
                class IndonesiaIDCard : public AbstractModel
                {
                public:
                    IndonesiaIDCard();
                    ~IndonesiaIDCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NIK License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNIK() const;

                    /**
                     * 设置License number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nIK License number
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nama Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNama() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nama Name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TempatTglLahir Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTempatTglLahir() const;

                    /**
                     * 设置Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tempatTglLahir Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JenisKelamin Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJenisKelamin() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jenisKelamin Gender
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GolDarah Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGolDarah() const;

                    /**
                     * 设置Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _golDarah Blood type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alamat Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlamat() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alamat Address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RTRW Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRTRW() const;

                    /**
                     * 设置Street
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rTRW Street
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KelDesa Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKelDesa() const;

                    /**
                     * 设置Village
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kelDesa Village
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Kecamatan Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKecamatan() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kecamatan Region
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Agama Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAgama() const;

                    /**
                     * 设置Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _agama Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusPerkawinan Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusPerkawinan() const;

                    /**
                     * 设置Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusPerkawinan Marital status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Perkerjaan Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPerkerjaan() const;

                    /**
                     * 设置Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _perkerjaan Job
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KewargaNegaraan Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKewargaNegaraan() const;

                    /**
                     * 设置Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kewargaNegaraan Nationality
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BerlakuHingga ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBerlakuHingga() const;

                    /**
                     * 设置ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _berlakuHingga ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuedDate Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 设置Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuedDate Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Provinsi Province
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProvinsi() const;

                    /**
                     * 设置Province
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _provinsi Province
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取City
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Kota City
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKota() const;

                    /**
                     * 设置City
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kota City
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * License number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nIK;
                    bool m_nIKHasBeenSet;

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nama;
                    bool m_namaHasBeenSet;

                    /**
                     * Birth place/Birthday
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tempatTglLahir;
                    bool m_tempatTglLahirHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jenisKelamin;
                    bool m_jenisKelaminHasBeenSet;

                    /**
                     * Blood type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_golDarah;
                    bool m_golDarahHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alamat;
                    bool m_alamatHasBeenSet;

                    /**
                     * Street
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rTRW;
                    bool m_rTRWHasBeenSet;

                    /**
                     * Village
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kelDesa;
                    bool m_kelDesaHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kecamatan;
                    bool m_kecamatanHasBeenSet;

                    /**
                     * Religious beliefs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_agama;
                    bool m_agamaHasBeenSet;

                    /**
                     * Marital status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusPerkawinan;
                    bool m_statusPerkawinanHasBeenSet;

                    /**
                     * Job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_perkerjaan;
                    bool m_perkerjaanHasBeenSet;

                    /**
                     * Nationality
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kewargaNegaraan;
                    bool m_kewargaNegaraanHasBeenSet;

                    /**
                     * ID card validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_berlakuHingga;
                    bool m_berlakuHinggaHasBeenSet;

                    /**
                     * Date of issue
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * Province
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_provinsi;
                    bool m_provinsiHasBeenSet;

                    /**
                     * City
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kota;
                    bool m_kotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INDONESIAIDCARD_H_
