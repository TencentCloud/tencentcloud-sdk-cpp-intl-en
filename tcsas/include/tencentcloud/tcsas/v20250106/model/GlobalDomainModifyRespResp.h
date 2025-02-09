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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_GLOBALDOMAINMODIFYRESPRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_GLOBALDOMAINMODIFYRESPRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response of global domain name modification
                */
                class GlobalDomainModifyRespResp : public AbstractModel
                {
                public:
                    GlobalDomainModifyRespResp();
                    ~GlobalDomainModifyRespResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: Success; 1: Allowed domains; 2: Blocked domains
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result 0: Success; 1: Allowed domains; 2: Blocked domains
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置0: Success; 1: Allowed domains; 2: Blocked domains
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result 0: Success; 1: Allowed domains; 2: Blocked domains
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 0: Success; 1: Allowed domains; 2: Blocked domains
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_GLOBALDOMAINMODIFYRESPRESP_H_
