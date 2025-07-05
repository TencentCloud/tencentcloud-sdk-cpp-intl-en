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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CLIENTCONNECTION_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CLIENTCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Client connection information, including client IP and number of connections
                */
                class ClientConnection : public AbstractModel
                {
                public:
                    ClientConnection();
                    ~ClientConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP of a connection
                     * @return IP Client IP of a connection
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Client IP of a connection
                     * @param _iP Client IP of a connection
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Number of connections corresponding to a client IP
                     * @return Count Number of connections corresponding to a client IP
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of connections corresponding to a client IP
                     * @param _count Number of connections corresponding to a client IP
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Whether it is the Tencent Cloud IP for automated testing
                     * @return InternalService Whether it is the Tencent Cloud IP for automated testing
                     * 
                     */
                    bool GetInternalService() const;

                    /**
                     * 设置Whether it is the Tencent Cloud IP for automated testing
                     * @param _internalService Whether it is the Tencent Cloud IP for automated testing
                     * 
                     */
                    void SetInternalService(const bool& _internalService);

                    /**
                     * 判断参数 InternalService 是否已赋值
                     * @return InternalService 是否已赋值
                     * 
                     */
                    bool InternalServiceHasBeenSet() const;

                private:

                    /**
                     * Client IP of a connection
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Number of connections corresponding to a client IP
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Whether it is the Tencent Cloud IP for automated testing
                     */
                    bool m_internalService;
                    bool m_internalServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CLIENTCONNECTION_H_
