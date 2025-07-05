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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICERESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeAPIService response structure.
                */
                class DescribeAPIServiceResponse : public AbstractModel
                {
                public:
                    DescribeAPIServiceResponse();
                    ~DescribeAPIServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Response data in JSON format.
                     * @return ResponseData Response data in JSON format.
                     * 
                     */
                    std::string GetResponseData() const;

                    /**
                     * 判断参数 ResponseData 是否已赋值
                     * @return ResponseData 是否已赋值
                     * 
                     */
                    bool ResponseDataHasBeenSet() const;

                private:

                    /**
                     * Response data in JSON format.
                     */
                    std::string m_responseData;
                    bool m_responseDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPISERVICERESPONSE_H_
