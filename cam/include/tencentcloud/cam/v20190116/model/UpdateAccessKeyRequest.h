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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEACCESSKEYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEACCESSKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdateAccessKey request structure.
                */
                class UpdateAccessKeyRequest : public AbstractModel
                {
                public:
                    UpdateAccessKeyRequest();
                    ~UpdateAccessKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the specified access key that needs to be updated
                     * @return AccessKeyId ID of the specified access key that needs to be updated
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置ID of the specified access key that needs to be updated
                     * @param _accessKeyId ID of the specified access key that needs to be updated
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * @return Status Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * @param _status Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取UIN of the specified user. If this parameter is left empty, the access key will be updated for the current user by default.
                     * @return TargetUin UIN of the specified user. If this parameter is left empty, the access key will be updated for the current user by default.
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the specified user. If this parameter is left empty, the access key will be updated for the current user by default.
                     * @param _targetUin UIN of the specified user. If this parameter is left empty, the access key will be updated for the current user by default.
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * ID of the specified access key that needs to be updated
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * UIN of the specified user. If this parameter is left empty, the access key will be updated for the current user by default.
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEACCESSKEYREQUEST_H_
