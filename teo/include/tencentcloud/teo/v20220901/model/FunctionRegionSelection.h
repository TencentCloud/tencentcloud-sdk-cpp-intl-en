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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREGIONSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREGIONSELECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Region policy configuration.
                */
                class FunctionRegionSelection : public AbstractModel
                {
                public:
                    FunctionRegionSelection();
                    ~FunctionRegionSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取List of countries/regions. example value: CN: china, CN.GD: guangdong, china. for values, see: [country/region and corresponding code enumeration](https://www.tencentcloud.comom/document/product/1552/112542?from_cn_redirect=1).
                     * @return Regions List of countries/regions. example value: CN: china, CN.GD: guangdong, china. for values, see: [country/region and corresponding code enumeration](https://www.tencentcloud.comom/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置List of countries/regions. example value: CN: china, CN.GD: guangdong, china. for values, see: [country/region and corresponding code enumeration](https://www.tencentcloud.comom/document/product/1552/112542?from_cn_redirect=1).
                     * @param _regions List of countries/regions. example value: CN: china, CN.GD: guangdong, china. for values, see: [country/region and corresponding code enumeration](https://www.tencentcloud.comom/document/product/1552/112542?from_cn_redirect=1).
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * List of countries/regions. example value: CN: china, CN.GD: guangdong, china. for values, see: [country/region and corresponding code enumeration](https://www.tencentcloud.comom/document/product/1552/112542?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREGIONSELECTION_H_
