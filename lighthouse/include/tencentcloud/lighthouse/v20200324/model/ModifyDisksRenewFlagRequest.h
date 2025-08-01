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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyDisksRenewFlag request structure.
                */
                class ModifyDisksRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyDisksRenewFlagRequest();
                    ~ModifyDisksRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk IDs.
                     * @return DiskIds List of cloud disk IDs.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs.
                     * @param _diskIds List of cloud disk IDs.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Whether Auto-Renewal is enabled 
                     * @return RenewFlag Whether Auto-Renewal is enabled 
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Whether Auto-Renewal is enabled 
                     * @param _renewFlag Whether Auto-Renewal is enabled 
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * List of cloud disk IDs.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Whether Auto-Renewal is enabled 
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSRENEWFLAGREQUEST_H_
