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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/LogFileInfo.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBLogFiles response structure.
                */
                class DescribeDBLogFilesResponse : public AbstractModel
                {
                public:
                    DescribeDBLogFilesResponse();
                    ~DescribeDBLogFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `tdsql-ow728lmc`.
                     * @return InstanceId Instance ID in the format of `tdsql-ow728lmc`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Requested log type. Valid values: 1 (binlog), 2 (cold backup), 3 (errlog), 4 (slowlog).
                     * @return Type Requested log type. Valid values: 1 (binlog), 2 (cold backup), 3 (errlog), 4 (slowlog).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Total number of requested logs
                     * @return Total Total number of requested logs
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Information such as `uri`, `length`, and `mtime` (modification time)
                     * @return Files Information such as `uri`, `length`, and `mtime` (modification time)
                     * 
                     */
                    std::vector<LogFileInfo> GetFiles() const;

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取For an instance in a VPC, this prefix plus URI can be used as the download address
                     * @return VpcPrefix For an instance in a VPC, this prefix plus URI can be used as the download address
                     * 
                     */
                    std::string GetVpcPrefix() const;

                    /**
                     * 判断参数 VpcPrefix 是否已赋值
                     * @return VpcPrefix 是否已赋值
                     * 
                     */
                    bool VpcPrefixHasBeenSet() const;

                    /**
                     * 获取For an instance in a common network, this prefix plus URI can be used as the download address
                     * @return NormalPrefix For an instance in a common network, this prefix plus URI can be used as the download address
                     * 
                     */
                    std::string GetNormalPrefix() const;

                    /**
                     * 判断参数 NormalPrefix 是否已赋值
                     * @return NormalPrefix 是否已赋值
                     * 
                     */
                    bool NormalPrefixHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `tdsql-ow728lmc`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Requested log type. Valid values: 1 (binlog), 2 (cold backup), 3 (errlog), 4 (slowlog).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Total number of requested logs
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Information such as `uri`, `length`, and `mtime` (modification time)
                     */
                    std::vector<LogFileInfo> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * For an instance in a VPC, this prefix plus URI can be used as the download address
                     */
                    std::string m_vpcPrefix;
                    bool m_vpcPrefixHasBeenSet;

                    /**
                     * For an instance in a common network, this prefix plus URI can be used as the download address
                     */
                    std::string m_normalPrefix;
                    bool m_normalPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBLOGFILESRESPONSE_H_
