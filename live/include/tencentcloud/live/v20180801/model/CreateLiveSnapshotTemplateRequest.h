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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveSnapshotTemplate request structure.
                */
                class CreateLiveSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveSnapshotTemplateRequest();
                    ~CreateLiveSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @return TemplateName Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @param TemplateName Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取COS application ID.
                     * @return CosAppId COS application ID.
                     */
                    int64_t GetCosAppId() const;

                    /**
                     * 设置COS application ID.
                     * @param CosAppId COS application ID.
                     */
                    void SetCosAppId(const int64_t& _cosAppId);

                    /**
                     * 判断参数 CosAppId 是否已赋值
                     * @return CosAppId 是否已赋值
                     */
                    bool CosAppIdHasBeenSet() const;

                    /**
                     * 获取COS bucket name.
                     * @return CosBucket COS bucket name.
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置COS bucket name.
                     * @param CosBucket COS bucket name.
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取COS region.
                     * @return CosRegion COS region.
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS region.
                     * @param CosRegion COS region.
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @return Description Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @param Description Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Screencapturing interval in seconds. Default value: 10s.
Value range: 5–600s.
                     * @return SnapshotInterval Screencapturing interval in seconds. Default value: 10s.
Value range: 5–600s.
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置Screencapturing interval in seconds. Default value: 10s.
Value range: 5–600s.
                     * @param SnapshotInterval Screencapturing interval in seconds. Default value: 10s.
Value range: 5–600s.
                     */
                    void SetSnapshotInterval(const int64_t& _snapshotInterval);

                    /**
                     * 判断参数 SnapshotInterval 是否已赋值
                     * @return SnapshotInterval 是否已赋值
                     */
                    bool SnapshotIntervalHasBeenSet() const;

                    /**
                     * 获取Screenshot width. Default value: 0 (original width).
                     * @return Width Screenshot width. Default value: 0 (original width).
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Screenshot width. Default value: 0 (original width).
                     * @param Width Screenshot width. Default value: 0 (original width).
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Screenshot height. Default value: 0 (original height).
                     * @return Height Screenshot height. Default value: 0 (original height).
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Screenshot height. Default value: 0 (original height).
                     * @param Height Screenshot height. Default value: 0 (original height).
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Whether to enable porn detection. 0: no, 1: yes. Default value: 0
                     * @return PornFlag Whether to enable porn detection. 0: no, 1: yes. Default value: 0
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置Whether to enable porn detection. 0: no, 1: yes. Default value: 0
                     * @param PornFlag Whether to enable porn detection. 0: no, 1: yes. Default value: 0
                     */
                    void SetPornFlag(const int64_t& _pornFlag);

                    /**
                     * 判断参数 PornFlag 是否已赋值
                     * @return PornFlag 是否已赋值
                     */
                    bool PornFlagHasBeenSet() const;

                    /**
                     * 获取COS bucket folder prefix.
                     * @return CosPrefix COS bucket folder prefix.
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 设置COS bucket folder prefix.
                     * @param CosPrefix COS bucket folder prefix.
                     */
                    void SetCosPrefix(const std::string& _cosPrefix);

                    /**
                     * 判断参数 CosPrefix 是否已赋值
                     * @return CosPrefix 是否已赋值
                     */
                    bool CosPrefixHasBeenSet() const;

                    /**
                     * 获取COS filename.
                     * @return CosFileName COS filename.
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置COS filename.
                     * @param CosFileName COS filename.
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     */
                    bool CosFileNameHasBeenSet() const;

                private:

                    /**
                     * Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * COS application ID.
                     */
                    int64_t m_cosAppId;
                    bool m_cosAppIdHasBeenSet;

                    /**
                     * COS bucket name.
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * COS region.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Screencapturing interval in seconds. Default value: 10s.
Value range: 5–600s.
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * Screenshot width. Default value: 0 (original width).
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Screenshot height. Default value: 0 (original height).
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Whether to enable porn detection. 0: no, 1: yes. Default value: 0
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

                    /**
                     * COS bucket folder prefix.
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * COS filename.
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_
