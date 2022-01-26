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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Screencapturing template information.
                */
                class SnapshotTemplateInfo : public AbstractModel
                {
                public:
                    SnapshotTemplateInfo();
                    ~SnapshotTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param TemplateId Template ID.
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param TemplateName Template name.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Screencapturing interval. Value range: 5-300s.
                     * @return SnapshotInterval Screencapturing interval. Value range: 5-300s.
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置Screencapturing interval. Value range: 5-300s.
                     * @param SnapshotInterval Screencapturing interval. Value range: 5-300s.
                     */
                    void SetSnapshotInterval(const int64_t& _snapshotInterval);

                    /**
                     * 判断参数 SnapshotInterval 是否已赋值
                     * @return SnapshotInterval 是否已赋值
                     */
                    bool SnapshotIntervalHasBeenSet() const;

                    /**
                     * 获取Screenshot width. Value range: 0-3000. 
0: original width and fit to the original ratio.
                     * @return Width Screenshot width. Value range: 0-3000. 
0: original width and fit to the original ratio.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Screenshot width. Value range: 0-3000. 
0: original width and fit to the original ratio.
                     * @param Width Screenshot width. Value range: 0-3000. 
0: original width and fit to the original ratio.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Screenshot height. Value range: 0-2000.
0: original height and fit to the original ratio.
                     * @return Height Screenshot height. Value range: 0-2000.
0: original height and fit to the original ratio.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Screenshot height. Value range: 0-2000.
0: original height and fit to the original ratio.
                     * @param Height Screenshot height. Value range: 0-2000.
0: original height and fit to the original ratio.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Whether to enable porn detection. 0: no, 1: yes.
                     * @return PornFlag Whether to enable porn detection. 0: no, 1: yes.
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置Whether to enable porn detection. 0: no, 1: yes.
                     * @param PornFlag Whether to enable porn detection. 0: no, 1: yes.
                     */
                    void SetPornFlag(const int64_t& _pornFlag);

                    /**
                     * 判断参数 PornFlag 是否已赋值
                     * @return PornFlag 是否已赋值
                     */
                    bool PornFlagHasBeenSet() const;

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
                     * 获取Template description.
                     * @return Description Template description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Template description.
                     * @param Description Template description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取COS bucket folder prefix.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CosPrefix COS bucket folder prefix.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 设置COS bucket folder prefix.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CosPrefix COS bucket folder prefix.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCosPrefix(const std::string& _cosPrefix);

                    /**
                     * 判断参数 CosPrefix 是否已赋值
                     * @return CosPrefix 是否已赋值
                     */
                    bool CosPrefixHasBeenSet() const;

                    /**
                     * 获取COS filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CosFileName COS filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置COS filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CosFileName COS filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     */
                    bool CosFileNameHasBeenSet() const;

                private:

                    /**
                     * Template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Screencapturing interval. Value range: 5-300s.
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * Screenshot width. Value range: 0-3000. 
0: original width and fit to the original ratio.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Screenshot height. Value range: 0-2000.
0: original height and fit to the original ratio.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Whether to enable porn detection. 0: no, 1: yes.
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

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
                     * Template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * COS bucket folder prefix.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * COS filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_
