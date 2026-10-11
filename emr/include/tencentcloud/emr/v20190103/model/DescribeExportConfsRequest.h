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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ExportConfContext.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeExportConfs request structure.
                */
                class DescribeExportConfsRequest : public AbstractModel
                {
                public:
                    DescribeExportConfsRequest();
                    ~DescribeExportConfsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Configuration to be exported.</p>
                     * @return ExportConfContexts <p>Configuration to be exported.</p>
                     * 
                     */
                    std::vector<ExportConfContext> GetExportConfContexts() const;

                    /**
                     * 设置<p>Configuration to be exported.</p>
                     * @param _exportConfContexts <p>Configuration to be exported.</p>
                     * 
                     */
                    void SetExportConfContexts(const std::vector<ExportConfContext>& _exportConfContexts);

                    /**
                     * 判断参数 ExportConfContexts 是否已赋值
                     * @return ExportConfContexts 是否已赋值
                     * 
                     */
                    bool ExportConfContextsHasBeenSet() const;

                    /**
                     * 获取<p>Export type.</p><p>Enumeration values:</p><ul><li>0: all configurations</li><li>1: only custom and modified configurations</li></ul>
                     * @return ExportType <p>Export type.</p><p>Enumeration values:</p><ul><li>0: all configurations</li><li>1: only custom and modified configurations</li></ul>
                     * 
                     */
                    int64_t GetExportType() const;

                    /**
                     * 设置<p>Export type.</p><p>Enumeration values:</p><ul><li>0: all configurations</li><li>1: only custom and modified configurations</li></ul>
                     * @param _exportType <p>Export type.</p><p>Enumeration values:</p><ul><li>0: all configurations</li><li>1: only custom and modified configurations</li></ul>
                     * 
                     */
                    void SetExportType(const int64_t& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node IP address.</p>
                     * @return Ip <p>Node IP address.</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Node IP address.</p>
                     * @param _ip <p>Node IP address.</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>Configuration group name.</p>
                     * @return ConfGroupName <p>Configuration group name.</p>
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置<p>Configuration group name.</p>
                     * @param _confGroupName <p>Configuration group name.</p>
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Configuration to be exported.</p>
                     */
                    std::vector<ExportConfContext> m_exportConfContexts;
                    bool m_exportConfContextsHasBeenSet;

                    /**
                     * <p>Export type.</p><p>Enumeration values:</p><ul><li>0: all configurations</li><li>1: only custom and modified configurations</li></ul>
                     */
                    int64_t m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>Node IP address.</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Configuration group name.</p>
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEXPORTCONFSREQUEST_H_
