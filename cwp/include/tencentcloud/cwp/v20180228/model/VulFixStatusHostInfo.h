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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * View the fixing status of each vulnerability on each host.
                */
                class VulFixStatusHostInfo : public AbstractModel
                {
                public:
                    VulFixStatusHostInfo();
                    ~VulFixStatusHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host IP
                     * @return HostIp Host IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP
                     * @param _hostIp Host IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Status. 0: initial status; 1: task issued (fixing); 2: completed (successful); 3: fixing failed (failed); 4: fixing failed due to snapshot creation failure (unfixed).
                     * @return Status Status. 0: initial status; 1: task issued (fixing); 2: completed (successful); 3: fixing failed (failed); 4: fixing failed due to snapshot creation failure (unfixed).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: initial status; 1: task issued (fixing); 2: completed (successful); 3: fixing failed (failed); 4: fixing failed due to snapshot creation failure (unfixed).
                     * @param _status Status. 0: initial status; 1: task issued (fixing); 2: completed (successful); 3: fixing failed (failed); 4: fixing failed due to snapshot creation failure (unfixed).
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Fixing time
                     * @return ModifyTime Fixing time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Fixing time
                     * @param _modifyTime Fixing time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Fixing failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailReason Fixing failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Fixing failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failReason Fixing failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Status. 0: initial status; 1: task issued (fixing); 2: completed (successful); 3: fixing failed (failed); 4: fixing failed due to snapshot creation failure (unfixed).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Fixing time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Fixing failure cause
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_
