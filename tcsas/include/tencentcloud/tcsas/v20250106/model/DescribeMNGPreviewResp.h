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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGPREVIEWRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGPREVIEWRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response object for querying the preview
                */
                class DescribeMNGPreviewResp : public AbstractModel
                {
                public:
                    DescribeMNGPreviewResp();
                    ~DescribeMNGPreviewResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game appid</p>
                     * @return MNPId <p>Mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid</p>
                     * @param _mNPId <p>Mini game appid</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini game name</p>
                     * @return MNPName <p>Mini game name</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini game name</p>
                     * @param _mNPName <p>Mini game name</p>
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取<p>Mini game description</p>
                     * @return MNPDesc <p>Mini game description</p>
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置<p>Mini game description</p>
                     * @param _mNPDesc <p>Mini game description</p>
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取<p>Mini game version</p>
                     * @return MNPVersion <p>Mini game version</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Mini game version</p>
                     * @param _mNPVersion <p>Mini game version</p>
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取<p>Mini game version description</p>
                     * @return MNPVersionIntro <p>Mini game version description</p>
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置<p>Mini game version description</p>
                     * @param _mNPVersionIntro <p>Mini game version description</p>
                     * 
                     */
                    void SetMNPVersionIntro(const std::string& _mNPVersionIntro);

                    /**
                     * 判断参数 MNPVersionIntro 是否已赋值
                     * @return MNPVersionIntro 是否已赋值
                     * 
                     */
                    bool MNPVersionIntroHasBeenSet() const;

                    /**
                     * 获取<p>Mini game version QR code</p>
                     * @return QRCodeUrl <p>Mini game version QR code</p>
                     * 
                     */
                    std::string GetQRCodeUrl() const;

                    /**
                     * 设置<p>Mini game version QR code</p>
                     * @param _qRCodeUrl <p>Mini game version QR code</p>
                     * 
                     */
                    void SetQRCodeUrl(const std::string& _qRCodeUrl);

                    /**
                     * 判断参数 QRCodeUrl 是否已赋值
                     * @return QRCodeUrl 是否已赋值
                     * 
                     */
                    bool QRCodeUrlHasBeenSet() const;

                    /**
                     * 获取<p>Preview path</p>
                     * @return PreviewEntrancePath <p>Preview path</p>
                     * 
                     */
                    std::string GetPreviewEntrancePath() const;

                    /**
                     * 设置<p>Preview path</p>
                     * @param _previewEntrancePath <p>Preview path</p>
                     * 
                     */
                    void SetPreviewEntrancePath(const std::string& _previewEntrancePath);

                    /**
                     * 判断参数 PreviewEntrancePath 是否已赋值
                     * @return PreviewEntrancePath 是否已赋值
                     * 
                     */
                    bool PreviewEntrancePathHasBeenSet() const;

                    /**
                     * 获取<p>Information encoded in the QR code</p>
                     * @return QRCodeContent <p>Information encoded in the QR code</p>
                     * 
                     */
                    std::string GetQRCodeContent() const;

                    /**
                     * 设置<p>Information encoded in the QR code</p>
                     * @param _qRCodeContent <p>Information encoded in the QR code</p>
                     * 
                     */
                    void SetQRCodeContent(const std::string& _qRCodeContent);

                    /**
                     * 判断参数 QRCodeContent 是否已赋值
                     * @return QRCodeContent 是否已赋值
                     * 
                     */
                    bool QRCodeContentHasBeenSet() const;

                private:

                    /**
                     * <p>Mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Mini game name</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini game description</p>
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * <p>Mini game version</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Mini game version description</p>
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * <p>Mini game version QR code</p>
                     */
                    std::string m_qRCodeUrl;
                    bool m_qRCodeUrlHasBeenSet;

                    /**
                     * <p>Preview path</p>
                     */
                    std::string m_previewEntrancePath;
                    bool m_previewEntrancePathHasBeenSet;

                    /**
                     * <p>Information encoded in the QR code</p>
                     */
                    std::string m_qRCodeContent;
                    bool m_qRCodeContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGPREVIEWRESP_H_
