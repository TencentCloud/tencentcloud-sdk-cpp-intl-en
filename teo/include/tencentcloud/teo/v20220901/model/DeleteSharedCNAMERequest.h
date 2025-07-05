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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETESHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETESHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteSharedCNAME request structure.
                */
                class DeleteSharedCNAMERequest : public AbstractModel
                {
                public:
                    DeleteSharedCNAMERequest();
                    ~DeleteSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site to which the shared CNAME belongs.
                     * @return ZoneId ID of the site to which the shared CNAME belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site to which the shared CNAME belongs.
                     * @param _zoneId ID of the site to which the shared CNAME belongs.
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
                     * 获取The shared CNAME to be deleted
                     * @return SharedCNAME The shared CNAME to be deleted
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置The shared CNAME to be deleted
                     * @param _sharedCNAME The shared CNAME to be deleted
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                private:

                    /**
                     * ID of the site to which the shared CNAME belongs.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The shared CNAME to be deleted
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETESHAREDCNAMEREQUEST_H_
