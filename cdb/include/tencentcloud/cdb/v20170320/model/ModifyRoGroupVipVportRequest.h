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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRoGroupVipVport request structure.
                */
                class ModifyRoGroupVipVportRequest : public AbstractModel
                {
                public:
                    ModifyRoGroupVipVportRequest();
                    ~ModifyRoGroupVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the RO group.
                     * @return UGroupId ID of the RO group.
                     * 
                     */
                    std::string GetUGroupId() const;

                    /**
                     * 设置ID of the RO group.
                     * @param _uGroupId ID of the RO group.
                     * 
                     */
                    void SetUGroupId(const std::string& _uGroupId);

                    /**
                     * 判断参数 UGroupId 是否已赋值
                     * @return UGroupId 是否已赋值
                     * 
                     */
                    bool UGroupIdHasBeenSet() const;

                    /**
                     * 获取Target IP address.
                     * @return DstIp Target IP address.
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP address.
                     * @param _dstIp Target IP address.
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Target Port.
                     * @return DstPort Target Port.
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置Target Port.
                     * @param _dstPort Target Port.
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                private:

                    /**
                     * ID of the RO group.
                     */
                    std::string m_uGroupId;
                    bool m_uGroupIdHasBeenSet;

                    /**
                     * Target IP address.
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Target Port.
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_
