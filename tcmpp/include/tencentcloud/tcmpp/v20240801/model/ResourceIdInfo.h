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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_RESOURCEIDINFO_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_RESOURCEIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Unified operation success ID - integer
                */
                class ResourceIdInfo : public AbstractModel
                {
                public:
                    ResourceIdInfo();
                    ~ResourceIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
0: No trial version currently available
1: A trial version is currently available and uploaded by the current user
2: A trial version is currently available and uploaded by another user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID
0: No trial version currently available
1: A trial version is currently available and uploaded by the current user
2: A trial version is currently available and uploaded by another user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResourceId() const;

                    /**
                     * 设置Resource ID
0: No trial version currently available
1: A trial version is currently available and uploaded by the current user
2: A trial version is currently available and uploaded by another user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId Resource ID
0: No trial version currently available
1: A trial version is currently available and uploaded by the current user
2: A trial version is currently available and uploaded by another user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceId(const int64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Resource ID
0: No trial version currently available
1: A trial version is currently available and uploaded by the current user
2: A trial version is currently available and uploaded by another user
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_RESOURCEIDINFO_H_
