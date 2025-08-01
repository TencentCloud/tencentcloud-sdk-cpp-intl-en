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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEINPUTSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEINPUTSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DeleteStreamLiveInputSecurityGroup request structure.
                */
                class DeleteStreamLiveInputSecurityGroupRequest : public AbstractModel
                {
                public:
                    DeleteStreamLiveInputSecurityGroupRequest();
                    ~DeleteStreamLiveInputSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input security group ID
                     * @return Id Input security group ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Input security group ID
                     * @param _id Input security group ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Input security group ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DELETESTREAMLIVEINPUTSECURITYGROUPREQUEST_H_
