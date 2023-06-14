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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Playback error code information
                */
                class ProIspPlayCodeDataInfo : public AbstractModel
                {
                public:
                    ProIspPlayCodeDataInfo();
                    ~ProIspPlayCodeDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Country or region.
                     * @return CountryAreaName Country or region.
                     * 
                     */
                    std::string GetCountryAreaName() const;

                    /**
                     * 设置Country or region.
                     * @param _countryAreaName Country or region.
                     * 
                     */
                    void SetCountryAreaName(const std::string& _countryAreaName);

                    /**
                     * 判断参数 CountryAreaName 是否已赋值
                     * @return CountryAreaName 是否已赋值
                     * 
                     */
                    bool CountryAreaNameHasBeenSet() const;

                    /**
                     * 获取District.
                     * @return ProvinceName District.
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置District.
                     * @param _provinceName District.
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取ISP.
                     * @return IspName ISP.
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置ISP.
                     * @param _ispName ISP.
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取Occurrences of 2xx error codes.
                     * @return Code2xx Occurrences of 2xx error codes.
                     * 
                     */
                    uint64_t GetCode2xx() const;

                    /**
                     * 设置Occurrences of 2xx error codes.
                     * @param _code2xx Occurrences of 2xx error codes.
                     * 
                     */
                    void SetCode2xx(const uint64_t& _code2xx);

                    /**
                     * 判断参数 Code2xx 是否已赋值
                     * @return Code2xx 是否已赋值
                     * 
                     */
                    bool Code2xxHasBeenSet() const;

                    /**
                     * 获取Occurrences of 3xx error codes.
                     * @return Code3xx Occurrences of 3xx error codes.
                     * 
                     */
                    uint64_t GetCode3xx() const;

                    /**
                     * 设置Occurrences of 3xx error codes.
                     * @param _code3xx Occurrences of 3xx error codes.
                     * 
                     */
                    void SetCode3xx(const uint64_t& _code3xx);

                    /**
                     * 判断参数 Code3xx 是否已赋值
                     * @return Code3xx 是否已赋值
                     * 
                     */
                    bool Code3xxHasBeenSet() const;

                    /**
                     * 获取Occurrences of 4xx error codes.
                     * @return Code4xx Occurrences of 4xx error codes.
                     * 
                     */
                    uint64_t GetCode4xx() const;

                    /**
                     * 设置Occurrences of 4xx error codes.
                     * @param _code4xx Occurrences of 4xx error codes.
                     * 
                     */
                    void SetCode4xx(const uint64_t& _code4xx);

                    /**
                     * 判断参数 Code4xx 是否已赋值
                     * @return Code4xx 是否已赋值
                     * 
                     */
                    bool Code4xxHasBeenSet() const;

                    /**
                     * 获取Occurrences of 5xx error codes.
                     * @return Code5xx Occurrences of 5xx error codes.
                     * 
                     */
                    uint64_t GetCode5xx() const;

                    /**
                     * 设置Occurrences of 5xx error codes.
                     * @param _code5xx Occurrences of 5xx error codes.
                     * 
                     */
                    void SetCode5xx(const uint64_t& _code5xx);

                    /**
                     * 判断参数 Code5xx 是否已赋值
                     * @return Code5xx 是否已赋值
                     * 
                     */
                    bool Code5xxHasBeenSet() const;

                private:

                    /**
                     * Country or region.
                     */
                    std::string m_countryAreaName;
                    bool m_countryAreaNameHasBeenSet;

                    /**
                     * District.
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * ISP.
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * Occurrences of 2xx error codes.
                     */
                    uint64_t m_code2xx;
                    bool m_code2xxHasBeenSet;

                    /**
                     * Occurrences of 3xx error codes.
                     */
                    uint64_t m_code3xx;
                    bool m_code3xxHasBeenSet;

                    /**
                     * Occurrences of 4xx error codes.
                     */
                    uint64_t m_code4xx;
                    bool m_code4xxHasBeenSet;

                    /**
                     * Occurrences of 5xx error codes.
                     */
                    uint64_t m_code5xx;
                    bool m_code5xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_
