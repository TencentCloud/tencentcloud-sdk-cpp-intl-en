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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDINFO_H_

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
                     * 获取Specifies the resource ID returned by the business.
0: no trial version available.
A trial version is currently available and uploaded by the current user.
2: a trial version is currently available and uploaded by another user.
                     * @return ResourceId Specifies the resource ID returned by the business.
0: no trial version available.
A trial version is currently available and uploaded by the current user.
2: a trial version is currently available and uploaded by another user.
                     * 
                     */
                    int64_t GetResourceId() const;

                    /**
                     * 设置Specifies the resource ID returned by the business.
0: no trial version available.
A trial version is currently available and uploaded by the current user.
2: a trial version is currently available and uploaded by another user.
                     * @param _resourceId Specifies the resource ID returned by the business.
0: no trial version available.
A trial version is currently available and uploaded by the current user.
2: a trial version is currently available and uploaded by another user.
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
                     * Specifies the resource ID returned by the business.
0: no trial version available.
A trial version is currently available and uploaded by the current user.
2: a trial version is currently available and uploaded by another user.
                     */
                    int64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_RESOURCEIDINFO_H_
