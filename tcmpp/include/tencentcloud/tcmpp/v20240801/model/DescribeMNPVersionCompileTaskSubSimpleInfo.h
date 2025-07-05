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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKSUBSIMPLEINFO_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKSUBSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Information of the subpackage built in a compiling task
                */
                class DescribeMNPVersionCompileTaskSubSimpleInfo : public AbstractModel
                {
                public:
                    DescribeMNPVersionCompileTaskSubSimpleInfo();
                    ~DescribeMNPVersionCompileTaskSubSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PkgName Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pkgName Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     * 
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取Prefix of the package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PathPrefix Prefix of the package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPathPrefix() const;

                    /**
                     * 设置Prefix of the package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pathPrefix Prefix of the package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPathPrefix(const std::string& _pathPrefix);

                    /**
                     * 判断参数 PathPrefix 是否已赋值
                     * @return PathPrefix 是否已赋值
                     * 
                     */
                    bool PathPrefixHasBeenSet() const;

                    /**
                     * 获取Package size in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PkgSize Package size in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPkgSize() const;

                    /**
                     * 设置Package size in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pkgSize Package size in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPkgSize(const int64_t& _pkgSize);

                    /**
                     * 判断参数 PkgSize 是否已赋值
                     * @return PkgSize 是否已赋值
                     * 
                     */
                    bool PkgSizeHasBeenSet() const;

                private:

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * Prefix of the package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pathPrefix;
                    bool m_pathPrefixHasBeenSet;

                    /**
                     * Package size in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pkgSize;
                    bool m_pkgSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKSUBSIMPLEINFO_H_
