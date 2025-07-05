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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PROVINCE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PROVINCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Province/State information
                */
                class Province : public AbstractModel
                {
                public:
                    Province();
                    ~Province() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Province/State ID
                     * @return ProvinceId Province/State ID
                     * 
                     */
                    std::string GetProvinceId() const;

                    /**
                     * 设置Province/State ID
                     * @param _provinceId Province/State ID
                     * 
                     */
                    void SetProvinceId(const std::string& _provinceId);

                    /**
                     * 判断参数 ProvinceId 是否已赋值
                     * @return ProvinceId 是否已赋值
                     * 
                     */
                    bool ProvinceIdHasBeenSet() const;

                    /**
                     * 获取Province/State name
                     * @return ProvinceName Province/State name
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置Province/State name
                     * @param _provinceName Province/State name
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                private:

                    /**
                     * Province/State ID
                     */
                    std::string m_provinceId;
                    bool m_provinceIdHasBeenSet;

                    /**
                     * Province/State name
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PROVINCE_H_
