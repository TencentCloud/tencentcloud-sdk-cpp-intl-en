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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_

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
                * DeleteAccessKey request structure.
                */
                class DeleteAccessKeyRequest : public AbstractModel
                {
                public:
                    DeleteAccessKeyRequest();
                    ~DeleteAccessKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the specified access key that needs to be deleted
                     * @return AccessKeyId ID of the specified access key that needs to be deleted
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置ID of the specified access key that needs to be deleted
                     * @param _accessKeyId ID of the specified access key that needs to be deleted
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
                     * 获取UIN of the specified user. If this parameter is left empty, the access key will be deleted for the current user by default.
                     * @return TargetUin UIN of the specified user. If this parameter is left empty, the access key will be deleted for the current user by default.
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置UIN of the specified user. If this parameter is left empty, the access key will be deleted for the current user by default.
                     * @param _targetUin UIN of the specified user. If this parameter is left empty, the access key will be deleted for the current user by default.
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
                     * ID of the specified access key that needs to be deleted
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * UIN of the specified user. If this parameter is left empty, the access key will be deleted for the current user by default.
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_
