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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBInstanceInter request structure.
                */
                class DescribeDBInstanceInterRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceInterRequest();
                    ~DescribeDBInstanceInterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The maximum number of results returned per page. Value range: 1-100.
                     * @return Limit The maximum number of results returned per page. Value range: 1-100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Value range: 1-100.
                     * @param _limit The maximum number of results returned per page. Value range: 1-100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter by instance ID
                     * @return InstanceId Filter by instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Filter by instance ID
                     * @param _instanceId Filter by instance ID
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
                     * 获取Filter by status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6` (Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * @return Status Filter by status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6` (Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Filter by status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6` (Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * @param _status Filter by status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6` (Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The list of instance version numbers
                     * @return VersionSet The list of instance version numbers
                     * 
                     */
                    std::vector<std::string> GetVersionSet() const;

                    /**
                     * 设置The list of instance version numbers
                     * @param _versionSet The list of instance version numbers
                     * 
                     */
                    void SetVersionSet(const std::vector<std::string>& _versionSet);

                    /**
                     * 判断参数 VersionSet 是否已赋值
                     * @return VersionSet 是否已赋值
                     * 
                     */
                    bool VersionSetHasBeenSet() const;

                    /**
                     * 获取Instance AZ ID in the format of ap-guangzhou-2
                     * @return Zone Instance AZ ID in the format of ap-guangzhou-2
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ ID in the format of ap-guangzhou-2
                     * @param _zone Instance AZ ID in the format of ap-guangzhou-2
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`.
                     * @return Offset Page number. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`.
                     * @param _offset Page number. Default value: `0`.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * The maximum number of results returned per page. Value range: 1-100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter by instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filter by status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6` (Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The list of instance version numbers
                     */
                    std::vector<std::string> m_versionSet;
                    bool m_versionSetHasBeenSet;

                    /**
                     * Instance AZ ID in the format of ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Page number. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_
