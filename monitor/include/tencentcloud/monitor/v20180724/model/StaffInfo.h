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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_

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
                * On-duty personnel ID group.
                */
                class StaffInfo : public AbstractModel
                {
                public:
                    StaffInfo();
                    ~StaffInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取On-duty personnel ID group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StaffIDs On-duty personnel ID group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetStaffIDs() const;

                    /**
                     * 设置On-duty personnel ID group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _staffIDs On-duty personnel ID group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStaffIDs(const std::vector<std::string>& _staffIDs);

                    /**
                     * 判断参数 StaffIDs 是否已赋值
                     * @return StaffIDs 是否已赋值
                     * 
                     */
                    bool StaffIDsHasBeenSet() const;

                private:

                    /**
                     * On-duty personnel ID group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_staffIDs;
                    bool m_staffIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_
