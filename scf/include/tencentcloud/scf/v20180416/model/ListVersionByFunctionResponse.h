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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/FunctionVersion.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListVersionByFunction response structure.
                */
                class ListVersionByFunctionResponse : public AbstractModel
                {
                public:
                    ListVersionByFunctionResponse();
                    ~ListVersionByFunctionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Function version
                     * @return FunctionVersion Function version
                     * 
                     */
                    std::vector<std::string> GetFunctionVersion() const;

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Function version list
Note: This field may return null, indicating that no valid values is found.
                     * @return Versions Function version list
Note: This field may return null, indicating that no valid values is found.
                     * 
                     */
                    std::vector<FunctionVersion> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取Total number of function versions
Note: This field may return null, indicating that no valid value was found.
                     * @return TotalCount Total number of function versions
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Function version
                     */
                    std::vector<std::string> m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Function version list
Note: This field may return null, indicating that no valid values is found.
                     */
                    std::vector<FunctionVersion> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * Total number of function versions
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONRESPONSE_H_
