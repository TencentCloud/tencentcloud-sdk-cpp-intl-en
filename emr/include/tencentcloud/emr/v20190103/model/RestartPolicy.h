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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Component restart policy
                */
                class RestartPolicy : public AbstractModel
                {
                public:
                    RestartPolicy();
                    ~RestartPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Restart policy name
                     * @return Name Restart policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Restart policy name
                     * @param _name Restart policy name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Policy display name
                     * @return DisplayName Policy display name
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Policy display name
                     * @param _displayName Policy display name
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Describe Policy description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Policy description
                     * @param _describe Policy description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Optional range for the number of batch restarted nodes
                     * @return BatchSizeRange Optional range for the number of batch restarted nodes
                     * 
                     */
                    std::vector<int64_t> GetBatchSizeRange() const;

                    /**
                     * 设置Optional range for the number of batch restarted nodes
                     * @param _batchSizeRange Optional range for the number of batch restarted nodes
                     * 
                     */
                    void SetBatchSizeRange(const std::vector<int64_t>& _batchSizeRange);

                    /**
                     * 判断参数 BatchSizeRange 是否已赋值
                     * @return BatchSizeRange 是否已赋值
                     * 
                     */
                    bool BatchSizeRangeHasBeenSet() const;

                    /**
                     * 获取Whether it is the default policy
                     * @return IsDefault Whether it is the default policy
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置Whether it is the default policy
                     * @param _isDefault Whether it is the default policy
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Restart policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy display name
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Optional range for the number of batch restarted nodes
                     */
                    std::vector<int64_t> m_batchSizeRange;
                    bool m_batchSizeRangeHasBeenSet;

                    /**
                     * Whether it is the default policy
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESTARTPOLICY_H_
