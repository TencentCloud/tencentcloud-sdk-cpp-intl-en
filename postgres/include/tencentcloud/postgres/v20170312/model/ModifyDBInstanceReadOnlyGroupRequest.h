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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_

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
                * ModifyDBInstanceReadOnlyGroup request structure.
                */
                class ModifyDBInstanceReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceReadOnlyGroupRequest();
                    ~ModifyDBInstanceReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param DBInstanceId Instance ID
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取ID of the RO group to which the read-only replica belongs
                     * @return ReadOnlyGroupId ID of the RO group to which the read-only replica belongs
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置ID of the RO group to which the read-only replica belongs
                     * @param ReadOnlyGroupId ID of the RO group to which the read-only replica belongs
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取ID of the new RO group into which the read-only replica will move
                     * @return NewReadOnlyGroupId ID of the new RO group into which the read-only replica will move
                     */
                    std::string GetNewReadOnlyGroupId() const;

                    /**
                     * 设置ID of the new RO group into which the read-only replica will move
                     * @param NewReadOnlyGroupId ID of the new RO group into which the read-only replica will move
                     */
                    void SetNewReadOnlyGroupId(const std::string& _newReadOnlyGroupId);

                    /**
                     * 判断参数 NewReadOnlyGroupId 是否已赋值
                     * @return NewReadOnlyGroupId 是否已赋值
                     */
                    bool NewReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * ID of the RO group to which the read-only replica belongs
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * ID of the new RO group into which the read-only replica will move
                     */
                    std::string m_newReadOnlyGroupId;
                    bool m_newReadOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_
