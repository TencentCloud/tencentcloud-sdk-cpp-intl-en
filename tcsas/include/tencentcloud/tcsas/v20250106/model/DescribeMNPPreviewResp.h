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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPPREVIEWRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPPREVIEWRESP_H_

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
                * Response of querying the preview
                */
                class DescribeMNPPreviewResp : public AbstractModel
                {
                public:
                    DescribeMNPPreviewResp();
                    ~DescribeMNPPreviewResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersion Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersionIntro() const;

                    /**
                     * 设置Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QRCodeUrl Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQRCodeUrl() const;

                    /**
                     * 设置Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qRCodeUrl Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Path to the preview
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PreviewEntrancePath Path to the preview
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPreviewEntrancePath() const;

                    /**
                     * 设置Path to the preview
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _previewEntrancePath Path to the preview
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QRCodeContent QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQRCodeContent() const;

                    /**
                     * 设置QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qRCodeContent QR code content
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Mini program version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersionIntro;
                    bool m_mNPVersionIntroHasBeenSet;

                    /**
                     * Mini program QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qRCodeUrl;
                    bool m_qRCodeUrlHasBeenSet;

                    /**
                     * Path to the preview
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_previewEntrancePath;
                    bool m_previewEntrancePathHasBeenSet;

                    /**
                     * QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qRCodeContent;
                    bool m_qRCodeContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPPREVIEWRESP_H_
