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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionListResponseDeprecatingInfo
                */
                class DescribePolicyConditionListResponseDeprecatingInfo : public AbstractModel
                {
                public:
                    DescribePolicyConditionListResponseDeprecatingInfo();
                    ~DescribePolicyConditionListResponseDeprecatingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to hide
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Hidden Whether to hide
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置Whether to hide
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hidden Whether to hide
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取Names of new views
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NewViewNames Names of new views
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNewViewNames() const;

                    /**
                     * 设置Names of new views
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _newViewNames Names of new views
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewViewNames(const std::vector<std::string>& _newViewNames);

                    /**
                     * 判断参数 NewViewNames 是否已赋值
                     * @return NewViewNames 是否已赋值
                     * 
                     */
                    bool NewViewNamesHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Whether to hide
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * Names of new views
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_newViewNames;
                    bool m_newViewNamesHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTRESPONSEDEPRECATINGINFO_H_
