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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPERMISSION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceBaseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Check permission information
                */
                class CheckPermission : public AbstractModel
                {
                public:
                    CheckPermission();
                    ~CheckPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Resource information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceBaseInfo Resource information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ResourceBaseInfo GetResourceBaseInfo() const;

                    /**
                     * 设置Resource information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceBaseInfo Resource information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceBaseInfo(const ResourceBaseInfo& _resourceBaseInfo);

                    /**
                     * 判断参数 ResourceBaseInfo 是否已赋值
                     * @return ResourceBaseInfo 是否已赋值
                     * 
                     */
                    bool ResourceBaseInfoHasBeenSet() const;

                private:

                    /**
                     * Permission type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Resource information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceBaseInfo m_resourceBaseInfo;
                    bool m_resourceBaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKPERMISSION_H_
