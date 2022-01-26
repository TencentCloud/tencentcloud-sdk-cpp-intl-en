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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERMACHINEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * `ServerList`, the list of machines at the storage layer (tcapsvr)
                */
                class ServerMachineInfo : public AbstractModel
                {
                public:
                    ServerMachineInfo();
                    ~ServerMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the machine
                     * @return ServerUid The unique ID of the machine
                     */
                    std::string GetServerUid() const;

                    /**
                     * 设置The unique ID of the machine
                     * @param ServerUid The unique ID of the machine
                     */
                    void SetServerUid(const std::string& _serverUid);

                    /**
                     * 判断参数 ServerUid 是否已赋值
                     * @return ServerUid 是否已赋值
                     */
                    bool ServerUidHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return MachineType Machine type
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type
                     * @param MachineType Machine type
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the machine
                     */
                    std::string m_serverUid;
                    bool m_serverUidHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERMACHINEINFO_H_
