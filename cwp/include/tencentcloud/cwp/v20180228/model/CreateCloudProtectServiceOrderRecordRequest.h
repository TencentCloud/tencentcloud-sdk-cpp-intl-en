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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCloudProtectServiceOrderRecord request structure.
                */
                class CreateCloudProtectServiceOrderRecordRequest : public AbstractModel
                {
                public:
                    CreateCloudProtectServiceOrderRecordRequest();
                    ~CreateCloudProtectServiceOrderRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID corresponding to cloud escort service
                     * @return ResourceIds Resource ID corresponding to cloud escort service
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID corresponding to cloud escort service
                     * @param _resourceIds Resource ID corresponding to cloud escort service
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Resource ID corresponding to cloud escort service
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDREQUEST_H_
