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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMEMap.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * BindSharedCNAME request structure.
                */
                class BindSharedCNAMERequest : public AbstractModel
                {
                public:
                    BindSharedCNAMERequest();
                    ~BindSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site related with the acceleration domain name.	
                     * @return ZoneId ID of the site related with the acceleration domain name.	
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site related with the acceleration domain name.	
                     * @param _zoneId ID of the site related with the acceleration domain name.	
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Action type. Values:
<li>`bind`: To bind</li>
<li>`unbind`: To unbind</li>
                     * @return BindType Action type. Values:
<li>`bind`: To bind</li>
<li>`unbind`: To unbind</li>
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置Action type. Values:
<li>`bind`: To bind</li>
<li>`unbind`: To unbind</li>
                     * @param _bindType Action type. Values:
<li>`bind`: To bind</li>
<li>`unbind`: To unbind</li>
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取Bindings between domain names and a shared CNAME
                     * @return BindSharedCNAMEMaps Bindings between domain names and a shared CNAME
                     * 
                     */
                    std::vector<BindSharedCNAMEMap> GetBindSharedCNAMEMaps() const;

                    /**
                     * 设置Bindings between domain names and a shared CNAME
                     * @param _bindSharedCNAMEMaps Bindings between domain names and a shared CNAME
                     * 
                     */
                    void SetBindSharedCNAMEMaps(const std::vector<BindSharedCNAMEMap>& _bindSharedCNAMEMaps);

                    /**
                     * 判断参数 BindSharedCNAMEMaps 是否已赋值
                     * @return BindSharedCNAMEMaps 是否已赋值
                     * 
                     */
                    bool BindSharedCNAMEMapsHasBeenSet() const;

                private:

                    /**
                     * ID of the site related with the acceleration domain name.	
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Action type. Values:
<li>`bind`: To bind</li>
<li>`unbind`: To unbind</li>
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * Bindings between domain names and a shared CNAME
                     */
                    std::vector<BindSharedCNAMEMap> m_bindSharedCNAMEMaps;
                    bool m_bindSharedCNAMEMapsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_
