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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeIndonesiaIDCardOCR response structure.
                */
                class RecognizeIndonesiaIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeIndonesiaIDCardOCRResponse();
                    ~RecognizeIndonesiaIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The Single Identity Number.
                     * @return NIK The Single Identity Number.
                     * 
                     */
                    std::string GetNIK() const;

                    /**
                     * 判断参数 NIK 是否已赋值
                     * @return NIK 是否已赋值
                     * 
                     */
                    bool NIKHasBeenSet() const;

                    /**
                     * 获取The full name.
                     * @return Nama The full name.
                     * 
                     */
                    std::string GetNama() const;

                    /**
                     * 判断参数 Nama 是否已赋值
                     * @return Nama 是否已赋值
                     * 
                     */
                    bool NamaHasBeenSet() const;

                    /**
                     * 获取The place and date of birth.
                     * @return TempatTglLahir The place and date of birth.
                     * 
                     */
                    std::string GetTempatTglLahir() const;

                    /**
                     * 判断参数 TempatTglLahir 是否已赋值
                     * @return TempatTglLahir 是否已赋值
                     * 
                     */
                    bool TempatTglLahirHasBeenSet() const;

                    /**
                     * 获取The gender.
                     * @return JenisKelamin The gender.
                     * 
                     */
                    std::string GetJenisKelamin() const;

                    /**
                     * 判断参数 JenisKelamin 是否已赋值
                     * @return JenisKelamin 是否已赋值
                     * 
                     */
                    bool JenisKelaminHasBeenSet() const;

                    /**
                     * 获取The blood type.
                     * @return GolDarah The blood type.
                     * 
                     */
                    std::string GetGolDarah() const;

                    /**
                     * 判断参数 GolDarah 是否已赋值
                     * @return GolDarah 是否已赋值
                     * 
                     */
                    bool GolDarahHasBeenSet() const;

                    /**
                     * 获取The address.
                     * @return Alamat The address.
                     * 
                     */
                    std::string GetAlamat() const;

                    /**
                     * 判断参数 Alamat 是否已赋值
                     * @return Alamat 是否已赋值
                     * 
                     */
                    bool AlamatHasBeenSet() const;

                    /**
                     * 获取The street.
                     * @return RTRW The street.
                     * 
                     */
                    std::string GetRTRW() const;

                    /**
                     * 判断参数 RTRW 是否已赋值
                     * @return RTRW 是否已赋值
                     * 
                     */
                    bool RTRWHasBeenSet() const;

                    /**
                     * 获取The village.
                     * @return KelDesa The village.
                     * 
                     */
                    std::string GetKelDesa() const;

                    /**
                     * 判断参数 KelDesa 是否已赋值
                     * @return KelDesa 是否已赋值
                     * 
                     */
                    bool KelDesaHasBeenSet() const;

                    /**
                     * 获取The region.
                     * @return Kecamatan The region.
                     * 
                     */
                    std::string GetKecamatan() const;

                    /**
                     * 判断参数 Kecamatan 是否已赋值
                     * @return Kecamatan 是否已赋值
                     * 
                     */
                    bool KecamatanHasBeenSet() const;

                    /**
                     * 获取The religion.
                     * @return Agama The religion.
                     * 
                     */
                    std::string GetAgama() const;

                    /**
                     * 判断参数 Agama 是否已赋值
                     * @return Agama 是否已赋值
                     * 
                     */
                    bool AgamaHasBeenSet() const;

                    /**
                     * 获取The marital status.
                     * @return StatusPerkawinan The marital status.
                     * 
                     */
                    std::string GetStatusPerkawinan() const;

                    /**
                     * 判断参数 StatusPerkawinan 是否已赋值
                     * @return StatusPerkawinan 是否已赋值
                     * 
                     */
                    bool StatusPerkawinanHasBeenSet() const;

                    /**
                     * 获取The occupation.
                     * @return Perkerjaan The occupation.
                     * 
                     */
                    std::string GetPerkerjaan() const;

                    /**
                     * 判断参数 Perkerjaan 是否已赋值
                     * @return Perkerjaan 是否已赋值
                     * 
                     */
                    bool PerkerjaanHasBeenSet() const;

                    /**
                     * 获取The nationality.
                     * @return KewargaNegaraan The nationality.
                     * 
                     */
                    std::string GetKewargaNegaraan() const;

                    /**
                     * 判断参数 KewargaNegaraan 是否已赋值
                     * @return KewargaNegaraan 是否已赋值
                     * 
                     */
                    bool KewargaNegaraanHasBeenSet() const;

                    /**
                     * 获取The expiry date.
                     * @return BerlakuHingga The expiry date.
                     * 
                     */
                    std::string GetBerlakuHingga() const;

                    /**
                     * 判断参数 BerlakuHingga 是否已赋值
                     * @return BerlakuHingga 是否已赋值
                     * 
                     */
                    bool BerlakuHinggaHasBeenSet() const;

                    /**
                     * 获取The issue date.
                     * @return IssuedDate The issue date.
                     * 
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     * 
                     */
                    bool IssuedDateHasBeenSet() const;

                    /**
                     * 获取The photo.
                     * @return Photo The photo.
                     * 
                     */
                    std::string GetPhoto() const;

                    /**
                     * 判断参数 Photo 是否已赋值
                     * @return Photo 是否已赋值
                     * 
                     */
                    bool PhotoHasBeenSet() const;

                    /**
                     * 获取The province, which is supported when the value of `Scene` is `V2`.
                     * @return Provinsi The province, which is supported when the value of `Scene` is `V2`.
                     * 
                     */
                    std::string GetProvinsi() const;

                    /**
                     * 判断参数 Provinsi 是否已赋值
                     * @return Provinsi 是否已赋值
                     * 
                     */
                    bool ProvinsiHasBeenSet() const;

                    /**
                     * 获取The city, which is supported when the value of `Scene` is `V2`.
                     * @return Kota The city, which is supported when the value of `Scene` is `V2`.
                     * 
                     */
                    std::string GetKota() const;

                    /**
                     * 判断参数 Kota 是否已赋值
                     * @return Kota 是否已赋值
                     * 
                     */
                    bool KotaHasBeenSet() const;

                private:

                    /**
                     * The Single Identity Number.
                     */
                    std::string m_nIK;
                    bool m_nIKHasBeenSet;

                    /**
                     * The full name.
                     */
                    std::string m_nama;
                    bool m_namaHasBeenSet;

                    /**
                     * The place and date of birth.
                     */
                    std::string m_tempatTglLahir;
                    bool m_tempatTglLahirHasBeenSet;

                    /**
                     * The gender.
                     */
                    std::string m_jenisKelamin;
                    bool m_jenisKelaminHasBeenSet;

                    /**
                     * The blood type.
                     */
                    std::string m_golDarah;
                    bool m_golDarahHasBeenSet;

                    /**
                     * The address.
                     */
                    std::string m_alamat;
                    bool m_alamatHasBeenSet;

                    /**
                     * The street.
                     */
                    std::string m_rTRW;
                    bool m_rTRWHasBeenSet;

                    /**
                     * The village.
                     */
                    std::string m_kelDesa;
                    bool m_kelDesaHasBeenSet;

                    /**
                     * The region.
                     */
                    std::string m_kecamatan;
                    bool m_kecamatanHasBeenSet;

                    /**
                     * The religion.
                     */
                    std::string m_agama;
                    bool m_agamaHasBeenSet;

                    /**
                     * The marital status.
                     */
                    std::string m_statusPerkawinan;
                    bool m_statusPerkawinanHasBeenSet;

                    /**
                     * The occupation.
                     */
                    std::string m_perkerjaan;
                    bool m_perkerjaanHasBeenSet;

                    /**
                     * The nationality.
                     */
                    std::string m_kewargaNegaraan;
                    bool m_kewargaNegaraanHasBeenSet;

                    /**
                     * The expiry date.
                     */
                    std::string m_berlakuHingga;
                    bool m_berlakuHinggaHasBeenSet;

                    /**
                     * The issue date.
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * The photo.
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * The province, which is supported when the value of `Scene` is `V2`.
                     */
                    std::string m_provinsi;
                    bool m_provinsiHasBeenSet;

                    /**
                     * The city, which is supported when the value of `Scene` is `V2`.
                     */
                    std::string m_kota;
                    bool m_kotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_
