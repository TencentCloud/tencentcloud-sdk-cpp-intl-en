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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERSFROMWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERSFROMWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserIdSetOfWorkGroupId.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteUsersFromWorkGroup request structure.
                */
                class DeleteUsersFromWorkGroupRequest : public AbstractModel
                {
                public:
                    DeleteUsersFromWorkGroupRequest();
                    ~DeleteUsersFromWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User information to be deleted
                     * @return AddInfo User information to be deleted
                     * 
                     */
                    UserIdSetOfWorkGroupId GetAddInfo() const;

                    /**
                     * 设置User information to be deleted
                     * @param _addInfo User information to be deleted
                     * 
                     */
                    void SetAddInfo(const UserIdSetOfWorkGroupId& _addInfo);

                    /**
                     * 判断参数 AddInfo 是否已赋值
                     * @return AddInfo 是否已赋值
                     * 
                     */
                    bool AddInfoHasBeenSet() const;

                private:

                    /**
                     * User information to be deleted
                     */
                    UserIdSetOfWorkGroupId m_addInfo;
                    bool m_addInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEUSERSFROMWORKGROUPREQUEST_H_
