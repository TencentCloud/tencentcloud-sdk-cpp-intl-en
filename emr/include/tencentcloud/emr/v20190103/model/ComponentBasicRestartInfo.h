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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_

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
                * Target processes
                */
                class ComponentBasicRestartInfo : public AbstractModel
                {
                public:
                    ComponentBasicRestartInfo();
                    ~ComponentBasicRestartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The process name (required), such as NameNode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentName The process name (required), such as NameNode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置The process name (required), such as NameNode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentName The process name (required), such as NameNode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取The target IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpList The target IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置The target IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipList The target IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * The process name (required), such as NameNode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * The target IP list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPONENTBASICRESTARTINFO_H_
