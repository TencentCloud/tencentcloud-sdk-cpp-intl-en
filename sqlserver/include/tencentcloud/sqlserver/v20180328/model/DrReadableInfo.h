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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 
                */
                class DrReadableInfo : public AbstractModel
                {
                public:
                    DrReadableInfo();
                    ~DrReadableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SlaveStatus 
                     * 
                     */
                    std::string GetSlaveStatus() const;

                    /**
                     * 设置
                     * @param _slaveStatus 
                     * 
                     */
                    void SetSlaveStatus(const std::string& _slaveStatus);

                    /**
                     * 判断参数 SlaveStatus 是否已赋值
                     * @return SlaveStatus 是否已赋值
                     * 
                     */
                    bool SlaveStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadableStatus 
                     * 
                     */
                    std::string GetReadableStatus() const;

                    /**
                     * 设置
                     * @param _readableStatus 
                     * 
                     */
                    void SetReadableStatus(const std::string& _readableStatus);

                    /**
                     * 判断参数 ReadableStatus 是否已赋值
                     * @return ReadableStatus 是否已赋值
                     * 
                     */
                    bool ReadableStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vip 
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置
                     * @param _vip 
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取
                     * @return VPort 
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置
                     * @param _vPort 
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取
                     * @return UniqVpcId 
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置
                     * @param _uniqVpcId 
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return UniqSubnetId 
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置
                     * @param _uniqSubnetId 
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_slaveStatus;
                    bool m_slaveStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_readableStatus;
                    bool m_readableStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
