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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_REMOVEUSERFROMGROUPREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_REMOVEUSERFROMGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/GroupIdOfUidInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * RemoveUserFromGroup request structure.
                */
                class RemoveUserFromGroupRequest : public AbstractModel
                {
                public:
                    RemoveUserFromGroupRequest();
                    ~RemoveUserFromGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The UID of the user to be deleted and an array corresponding to the User Group IDs
                     * @return Info The UID of the user to be deleted and an array corresponding to the User Group IDs
                     */
                    std::vector<GroupIdOfUidInfo> GetInfo() const;

                    /**
                     * 设置The UID of the user to be deleted and an array corresponding to the User Group IDs
                     * @param Info The UID of the user to be deleted and an array corresponding to the User Group IDs
                     */
                    void SetInfo(const std::vector<GroupIdOfUidInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * The UID of the user to be deleted and an array corresponding to the User Group IDs
                     */
                    std::vector<GroupIdOfUidInfo> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_REMOVEUSERFROMGROUPREQUEST_H_
