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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKGRANTEDPERMISSIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKGRANTEDPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CheckPermission.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckGrantedPermission request structure.
                */
                class CheckGrantedPermissionRequest : public AbstractModel
                {
                public:
                    CheckGrantedPermissionRequest();
                    ~CheckGrantedPermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission check
                     * @return CheckPermission Permission check
                     * 
                     */
                    std::vector<CheckPermission> GetCheckPermission() const;

                    /**
                     * 设置Permission check
                     * @param _checkPermission Permission check
                     * 
                     */
                    void SetCheckPermission(const std::vector<CheckPermission>& _checkPermission);

                    /**
                     * 判断参数 CheckPermission 是否已赋值
                     * @return CheckPermission 是否已赋值
                     * 
                     */
                    bool CheckPermissionHasBeenSet() const;

                private:

                    /**
                     * Permission check
                     */
                    std::vector<CheckPermission> m_checkPermission;
                    bool m_checkPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKGRANTEDPERMISSIONREQUEST_H_
