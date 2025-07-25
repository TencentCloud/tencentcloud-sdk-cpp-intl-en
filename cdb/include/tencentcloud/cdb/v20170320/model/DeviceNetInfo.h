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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Network monitoring information of the physical server where the instance is located
                */
                class DeviceNetInfo : public AbstractModel
                {
                public:
                    DeviceNetInfo();
                    ~DeviceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of TCP connections
                     * @return Conn Number of TCP connections
                     * 
                     */
                    std::vector<int64_t> GetConn() const;

                    /**
                     * 设置Number of TCP connections
                     * @param _conn Number of TCP connections
                     * 
                     */
                    void SetConn(const std::vector<int64_t>& _conn);

                    /**
                     * 判断参数 Conn 是否已赋值
                     * @return Conn 是否已赋值
                     * 
                     */
                    bool ConnHasBeenSet() const;

                    /**
                     * 获取ENI inbound packets per second
                     * @return PackageIn ENI inbound packets per second
                     * 
                     */
                    std::vector<int64_t> GetPackageIn() const;

                    /**
                     * 设置ENI inbound packets per second
                     * @param _packageIn ENI inbound packets per second
                     * 
                     */
                    void SetPackageIn(const std::vector<int64_t>& _packageIn);

                    /**
                     * 判断参数 PackageIn 是否已赋值
                     * @return PackageIn 是否已赋值
                     * 
                     */
                    bool PackageInHasBeenSet() const;

                    /**
                     * 获取ENI outbound packets per second
                     * @return PackageOut ENI outbound packets per second
                     * 
                     */
                    std::vector<int64_t> GetPackageOut() const;

                    /**
                     * 设置ENI outbound packets per second
                     * @param _packageOut ENI outbound packets per second
                     * 
                     */
                    void SetPackageOut(const std::vector<int64_t>& _packageOut);

                    /**
                     * 判断参数 PackageOut 是否已赋值
                     * @return PackageOut 是否已赋值
                     * 
                     */
                    bool PackageOutHasBeenSet() const;

                    /**
                     * 获取Inbound traffic in Kbps
                     * @return FlowIn Inbound traffic in Kbps
                     * 
                     */
                    std::vector<int64_t> GetFlowIn() const;

                    /**
                     * 设置Inbound traffic in Kbps
                     * @param _flowIn Inbound traffic in Kbps
                     * 
                     */
                    void SetFlowIn(const std::vector<int64_t>& _flowIn);

                    /**
                     * 判断参数 FlowIn 是否已赋值
                     * @return FlowIn 是否已赋值
                     * 
                     */
                    bool FlowInHasBeenSet() const;

                    /**
                     * 获取Outbound traffic in Kbps
                     * @return FlowOut Outbound traffic in Kbps
                     * 
                     */
                    std::vector<int64_t> GetFlowOut() const;

                    /**
                     * 设置Outbound traffic in Kbps
                     * @param _flowOut Outbound traffic in Kbps
                     * 
                     */
                    void SetFlowOut(const std::vector<int64_t>& _flowOut);

                    /**
                     * 判断参数 FlowOut 是否已赋值
                     * @return FlowOut 是否已赋值
                     * 
                     */
                    bool FlowOutHasBeenSet() const;

                private:

                    /**
                     * Number of TCP connections
                     */
                    std::vector<int64_t> m_conn;
                    bool m_connHasBeenSet;

                    /**
                     * ENI inbound packets per second
                     */
                    std::vector<int64_t> m_packageIn;
                    bool m_packageInHasBeenSet;

                    /**
                     * ENI outbound packets per second
                     */
                    std::vector<int64_t> m_packageOut;
                    bool m_packageOutHasBeenSet;

                    /**
                     * Inbound traffic in Kbps
                     */
                    std::vector<int64_t> m_flowIn;
                    bool m_flowInHasBeenSet;

                    /**
                     * Outbound traffic in Kbps
                     */
                    std::vector<int64_t> m_flowOut;
                    bool m_flowOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICENETINFO_H_
