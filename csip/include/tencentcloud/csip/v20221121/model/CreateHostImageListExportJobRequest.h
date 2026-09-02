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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTIMAGELISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTIMAGELISTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateHostImageListExportJob request structure.
                */
                class CreateHostImageListExportJobRequest : public AbstractModel
                {
                public:
                    CreateHostImageListExportJobRequest();
                    ~CreateHostImageListExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MD5 of the cluster CA certificate (32-bit hexadecimal, required)</p>
                     * @return ClusterCaMD5 <p>MD5 of the cluster CA certificate (32-bit hexadecimal, required)</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>MD5 of the cluster CA certificate (32-bit hexadecimal, required)</p>
                     * @param _clusterCaMD5 <p>MD5 of the cluster CA certificate (32-bit hexadecimal, required)</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Common ListFilter structure (including Filters array + ListFindOption pagination)<br>Supported filter fields: Host / ImageId / ImageName / HasRunningContainer</p>
                     * @return Filter <p>Common ListFilter structure (including Filters array + ListFindOption pagination)<br>Supported filter fields: Host / ImageId / ImageName / HasRunningContainer</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>Common ListFilter structure (including Filters array + ListFindOption pagination)<br>Supported filter fields: Host / ImageId / ImageName / HasRunningContainer</p>
                     * @param _filter <p>Common ListFilter structure (including Filters array + ListFindOption pagination)<br>Supported filter fields: Host / ImageId / ImageName / HasRunningContainer</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>List of fields to export (all fields are exported if this parameter is not passed)<br>Enumeration values:<br>ImageId: image ID<br>ImageName: image name<br>ImageVersion: mirror version<br>ContainerCount: number of associated containers<br>HostCount: number of associated hosts<br>CreateTime: creation time<br>NickName: account nickname (automatically excluded in single account mode)<br>ScanStatus: scan status<br>LastScanTime: latest scan completion time<br>VulCountCritical: number of critical vulnerabilities<br>VulCountHigh: number of high vulnerabilities<br>VulCountMedium: number of medium vulnerabilities<br>VulCountLow: number of low vulnerabilities<br>VirusCountCritical: number of critical trojans<br>VirusCountHigh: number of high trojans<br>VirusCountMedium: number of medium trojans<br>VirusCountLow: number of low trojans<br>SensitiveCountCritical: number of critical sensitive data items<br>SensitiveCountHigh: number of high sensitive data items<br>SensitiveCountMedium: number of medium sensitive data items<br>SensitiveCountLow: number of low sensitive data items</p>
                     * @return ExportFields <p>List of fields to export (all fields are exported if this parameter is not passed)<br>Enumeration values:<br>ImageId: image ID<br>ImageName: image name<br>ImageVersion: mirror version<br>ContainerCount: number of associated containers<br>HostCount: number of associated hosts<br>CreateTime: creation time<br>NickName: account nickname (automatically excluded in single account mode)<br>ScanStatus: scan status<br>LastScanTime: latest scan completion time<br>VulCountCritical: number of critical vulnerabilities<br>VulCountHigh: number of high vulnerabilities<br>VulCountMedium: number of medium vulnerabilities<br>VulCountLow: number of low vulnerabilities<br>VirusCountCritical: number of critical trojans<br>VirusCountHigh: number of high trojans<br>VirusCountMedium: number of medium trojans<br>VirusCountLow: number of low trojans<br>SensitiveCountCritical: number of critical sensitive data items<br>SensitiveCountHigh: number of high sensitive data items<br>SensitiveCountMedium: number of medium sensitive data items<br>SensitiveCountLow: number of low sensitive data items</p>
                     * 
                     */
                    std::vector<std::string> GetExportFields() const;

                    /**
                     * 设置<p>List of fields to export (all fields are exported if this parameter is not passed)<br>Enumeration values:<br>ImageId: image ID<br>ImageName: image name<br>ImageVersion: mirror version<br>ContainerCount: number of associated containers<br>HostCount: number of associated hosts<br>CreateTime: creation time<br>NickName: account nickname (automatically excluded in single account mode)<br>ScanStatus: scan status<br>LastScanTime: latest scan completion time<br>VulCountCritical: number of critical vulnerabilities<br>VulCountHigh: number of high vulnerabilities<br>VulCountMedium: number of medium vulnerabilities<br>VulCountLow: number of low vulnerabilities<br>VirusCountCritical: number of critical trojans<br>VirusCountHigh: number of high trojans<br>VirusCountMedium: number of medium trojans<br>VirusCountLow: number of low trojans<br>SensitiveCountCritical: number of critical sensitive data items<br>SensitiveCountHigh: number of high sensitive data items<br>SensitiveCountMedium: number of medium sensitive data items<br>SensitiveCountLow: number of low sensitive data items</p>
                     * @param _exportFields <p>List of fields to export (all fields are exported if this parameter is not passed)<br>Enumeration values:<br>ImageId: image ID<br>ImageName: image name<br>ImageVersion: mirror version<br>ContainerCount: number of associated containers<br>HostCount: number of associated hosts<br>CreateTime: creation time<br>NickName: account nickname (automatically excluded in single account mode)<br>ScanStatus: scan status<br>LastScanTime: latest scan completion time<br>VulCountCritical: number of critical vulnerabilities<br>VulCountHigh: number of high vulnerabilities<br>VulCountMedium: number of medium vulnerabilities<br>VulCountLow: number of low vulnerabilities<br>VirusCountCritical: number of critical trojans<br>VirusCountHigh: number of high trojans<br>VirusCountMedium: number of medium trojans<br>VirusCountLow: number of low trojans<br>SensitiveCountCritical: number of critical sensitive data items<br>SensitiveCountHigh: number of high sensitive data items<br>SensitiveCountMedium: number of medium sensitive data items<br>SensitiveCountLow: number of low sensitive data items</p>
                     * 
                     */
                    void SetExportFields(const std::vector<std::string>& _exportFields);

                    /**
                     * 判断参数 ExportFields 是否已赋值
                     * @return ExportFields 是否已赋值
                     * 
                     */
                    bool ExportFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>MD5 of the cluster CA certificate (32-bit hexadecimal, required)</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Common ListFilter structure (including Filters array + ListFindOption pagination)<br>Supported filter fields: Host / ImageId / ImageName / HasRunningContainer</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>List of fields to export (all fields are exported if this parameter is not passed)<br>Enumeration values:<br>ImageId: image ID<br>ImageName: image name<br>ImageVersion: mirror version<br>ContainerCount: number of associated containers<br>HostCount: number of associated hosts<br>CreateTime: creation time<br>NickName: account nickname (automatically excluded in single account mode)<br>ScanStatus: scan status<br>LastScanTime: latest scan completion time<br>VulCountCritical: number of critical vulnerabilities<br>VulCountHigh: number of high vulnerabilities<br>VulCountMedium: number of medium vulnerabilities<br>VulCountLow: number of low vulnerabilities<br>VirusCountCritical: number of critical trojans<br>VirusCountHigh: number of high trojans<br>VirusCountMedium: number of medium trojans<br>VirusCountLow: number of low trojans<br>SensitiveCountCritical: number of critical sensitive data items<br>SensitiveCountHigh: number of high sensitive data items<br>SensitiveCountMedium: number of medium sensitive data items<br>SensitiveCountLow: number of low sensitive data items</p>
                     */
                    std::vector<std::string> m_exportFields;
                    bool m_exportFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEHOSTIMAGELISTEXPORTJOBREQUEST_H_
