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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Storage region information
                */
                class StorageRegionInfo : public AbstractModel
                {
                public:
                    StorageRegionInfo();
                    ~StorageRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage region.
                     * @return Region Storage region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Storage region.
                     * @param _region Storage region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Store region description information.
                     * @return Description Store region description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Store region description information.
                     * @param _description Store region description information.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Status. Whether it is enabled. Valid values:
<li>opened: enabled.</li>
<li>unopened: not activated.</li>
                     * @return Status Status. Whether it is enabled. Valid values:
<li>opened: enabled.</li>
<li>unopened: not activated.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Whether it is enabled. Valid values:
<li>opened: enabled.</li>
<li>unopened: not activated.</li>
                     * @param _status Status. Whether it is enabled. Valid values:
<li>opened: enabled.</li>
<li>unopened: not activated.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether it is the default storage region. true: yes; false: no.
                     * @return IsDefault Whether it is the default storage region. true: yes; false: no.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default storage region. true: yes; false: no.
                     * @param _isDefault Whether it is the default storage region. true: yes; false: no.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Storage area. Valid values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * @return Area Storage area. Valid values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Storage area. Valid values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * @param _area Storage area. Valid values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Storage region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Store region description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status. Whether it is enabled. Valid values:
<li>opened: enabled.</li>
<li>unopened: not activated.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it is the default storage region. true: yes; false: no.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Storage area. Valid values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
