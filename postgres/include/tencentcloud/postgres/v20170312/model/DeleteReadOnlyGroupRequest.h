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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteReadOnlyGroup request structure.
                */
                class DeleteReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    DeleteReadOnlyGroupRequest();
                    ~DeleteReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the RO group to be deleted
                     * @return ReadOnlyGroupId ID of the RO group to be deleted
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置ID of the RO group to be deleted
                     * @param _readOnlyGroupId ID of the RO group to be deleted
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * ID of the RO group to be deleted
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEREADONLYGROUPREQUEST_H_
