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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTCLIENTSETTINGHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTCLIENTSETTINGHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ExportClientSettingHostList request structure.
                */
                class ExportClientSettingHostListRequest : public AbstractModel
                {
                public:
                    ExportClientSettingHostListRequest();
                    ~ExportClientSettingHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Export business type PreventUninstall Uninstall prevention host list export LoginType QR code login host list export ProcessDaemon Process daemon host list export</p>
                     * @return BusiType <p>Export business type PreventUninstall Uninstall prevention host list export LoginType QR code login host list export ProcessDaemon Process daemon host list export</p>
                     * 
                     */
                    std::string GetBusiType() const;

                    /**
                     * 设置<p>Export business type PreventUninstall Uninstall prevention host list export LoginType QR code login host list export ProcessDaemon Process daemon host list export</p>
                     * @param _busiType <p>Export business type PreventUninstall Uninstall prevention host list export LoginType QR code login host list export ProcessDaemon Process daemon host list export</p>
                     * 
                     */
                    void SetBusiType(const std::string& _busiType);

                    /**
                     * 判断参数 BusiType 是否已赋值
                     * @return BusiType 是否已赋值
                     * 
                     */
                    bool BusiTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
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
                     * 获取<p>Filter parameter</p>
                     * @return Filters <p>Filter parameter</p>
                     * 
                     */
                    std::vector<EDRFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter parameter</p>
                     * @param _filters <p>Filter parameter</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Export business type PreventUninstall Uninstall prevention host list export LoginType QR code login host list export ProcessDaemon Process daemon host list export</p>
                     */
                    std::string m_busiType;
                    bool m_busiTypeHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter parameter</p>
                     */
                    std::vector<EDRFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTCLIENTSETTINGHOSTLISTREQUEST_H_
