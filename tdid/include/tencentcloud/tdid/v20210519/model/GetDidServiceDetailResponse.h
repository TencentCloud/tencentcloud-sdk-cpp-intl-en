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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/DidServiceInfo.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidServiceDetail response structure.
                */
                class GetDidServiceDetailResponse : public AbstractModel
                {
                public:
                    GetDidServiceDetailResponse();
                    ~GetDidServiceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The DID service information.
                     * @return DidService The DID service information.
                     * 
                     */
                    DidServiceInfo GetDidService() const;

                    /**
                     * 判断参数 DidService 是否已赋值
                     * @return DidService 是否已赋值
                     * 
                     */
                    bool DidServiceHasBeenSet() const;

                private:

                    /**
                     * The DID service information.
                     */
                    DidServiceInfo m_didService;
                    bool m_didServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICEDETAILRESPONSE_H_
