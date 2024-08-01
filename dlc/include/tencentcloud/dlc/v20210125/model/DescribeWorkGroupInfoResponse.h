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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupDetailInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWorkGroupInfo response structure.
                */
                class DescribeWorkGroupInfoResponse : public AbstractModel
                {
                public:
                    DescribeWorkGroupInfoResponse();
                    ~DescribeWorkGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details about working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupInfo Details about working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WorkGroupDetailInfo GetWorkGroupInfo() const;

                    /**
                     * 判断参数 WorkGroupInfo 是否已赋值
                     * @return WorkGroupInfo 是否已赋值
                     * 
                     */
                    bool WorkGroupInfoHasBeenSet() const;

                private:

                    /**
                     * Details about working groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkGroupDetailInfo m_workGroupInfo;
                    bool m_workGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFORESPONSE_H_
