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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Instance name index settings.
                */
                class InstanceNameIndexSettings : public AbstractModel
                {
                public:
                    InstanceNameIndexSettings();
                    ~InstanceNameIndexSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable instance name index. Default value: false. Value range:.

**true**: indicates that instance name index is enabled.
**false**: indicates that instance name index is disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Whether to enable instance name index. Default value: false. Value range:.

**true**: indicates that instance name index is enabled.
**false**: indicates that instance name index is disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable instance name index. Default value: false. Value range:.

**true**: indicates that instance name index is enabled.
**false**: indicates that instance name index is disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Whether to enable instance name index. Default value: false. Value range:.

**true**: indicates that instance name index is enabled.
**false**: indicates that instance name index is disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Begin index number. Value range: [0, 99999999].

Indicates that the scale out activity will be failed when the index out of range. 
If not specified, carries forward historical index number or 0.
Lowering the index sequence number may lead to instance name duplication within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginIndex Begin index number. Value range: [0, 99999999].

Indicates that the scale out activity will be failed when the index out of range. 
If not specified, carries forward historical index number or 0.
Lowering the index sequence number may lead to instance name duplication within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBeginIndex() const;

                    /**
                     * 设置Begin index number. Value range: [0, 99999999].

Indicates that the scale out activity will be failed when the index out of range. 
If not specified, carries forward historical index number or 0.
Lowering the index sequence number may lead to instance name duplication within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginIndex Begin index number. Value range: [0, 99999999].

Indicates that the scale out activity will be failed when the index out of range. 
If not specified, carries forward historical index number or 0.
Lowering the index sequence number may lead to instance name duplication within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginIndex(const int64_t& _beginIndex);

                    /**
                     * 判断参数 BeginIndex 是否已赋值
                     * @return BeginIndex 是否已赋值
                     * 
                     */
                    bool BeginIndexHasBeenSet() const;

                    /**
                     * 获取Instance name index number digits, defaults to 0, means no specified digit count. Value range: 0-8, maximum is integer 8. when using values 1-8, the system checks whether the index number exceeds the maximum digit for this digit count.

If set to 3, index number is in the format: 000, 001, 002 ... 010, 011 ... 100 ... 999. The maximum is 999. 
Assuming set to 0, the index number is 0, 1, 2 ... 10, 11 ... 100 ... 1000 ...10000 ... 99999999. Max number is 99999999.
                     * @return IndexLength Instance name index number digits, defaults to 0, means no specified digit count. Value range: 0-8, maximum is integer 8. when using values 1-8, the system checks whether the index number exceeds the maximum digit for this digit count.

If set to 3, index number is in the format: 000, 001, 002 ... 010, 011 ... 100 ... 999. The maximum is 999. 
Assuming set to 0, the index number is 0, 1, 2 ... 10, 11 ... 100 ... 1000 ...10000 ... 99999999. Max number is 99999999.
                     * 
                     */
                    uint64_t GetIndexLength() const;

                    /**
                     * 设置Instance name index number digits, defaults to 0, means no specified digit count. Value range: 0-8, maximum is integer 8. when using values 1-8, the system checks whether the index number exceeds the maximum digit for this digit count.

If set to 3, index number is in the format: 000, 001, 002 ... 010, 011 ... 100 ... 999. The maximum is 999. 
Assuming set to 0, the index number is 0, 1, 2 ... 10, 11 ... 100 ... 1000 ...10000 ... 99999999. Max number is 99999999.
                     * @param _indexLength Instance name index number digits, defaults to 0, means no specified digit count. Value range: 0-8, maximum is integer 8. when using values 1-8, the system checks whether the index number exceeds the maximum digit for this digit count.

If set to 3, index number is in the format: 000, 001, 002 ... 010, 011 ... 100 ... 999. The maximum is 999. 
Assuming set to 0, the index number is 0, 1, 2 ... 10, 11 ... 100 ... 1000 ...10000 ... 99999999. Max number is 99999999.
                     * 
                     */
                    void SetIndexLength(const uint64_t& _indexLength);

                    /**
                     * 判断参数 IndexLength 是否已赋值
                     * @return IndexLength 是否已赋值
                     * 
                     */
                    bool IndexLengthHasBeenSet() const;

                private:

                    /**
                     * Whether to enable instance name index. Default value: false. Value range:.

**true**: indicates that instance name index is enabled.
**false**: indicates that instance name index is disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Begin index number. Value range: [0, 99999999].

Indicates that the scale out activity will be failed when the index out of range. 
If not specified, carries forward historical index number or 0.
Lowering the index sequence number may lead to instance name duplication within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_beginIndex;
                    bool m_beginIndexHasBeenSet;

                    /**
                     * Instance name index number digits, defaults to 0, means no specified digit count. Value range: 0-8, maximum is integer 8. when using values 1-8, the system checks whether the index number exceeds the maximum digit for this digit count.

If set to 3, index number is in the format: 000, 001, 002 ... 010, 011 ... 100 ... 999. The maximum is 999. 
Assuming set to 0, the index number is 0, 1, 2 ... 10, 11 ... 100 ... 1000 ...10000 ... 99999999. Max number is 99999999.
                     */
                    uint64_t m_indexLength;
                    bool m_indexLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
