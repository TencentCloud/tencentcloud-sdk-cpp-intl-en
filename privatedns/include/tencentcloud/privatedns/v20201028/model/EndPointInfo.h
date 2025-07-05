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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Endpoint information.
                */
                class EndPointInfo : public AbstractModel
                {
                public:
                    EndPointInfo();
                    ~EndPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Endpoint ID.
                     * @return EndPointId Endpoint ID.
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置Endpoint ID.
                     * @param _endPointId Endpoint ID.
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取Endpoint name.
                     * @return EndPointName Endpoint name.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name.
                     * @param _endPointName Endpoint name.
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID.
                     * @return EndPointServiceId Endpoint service ID.
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID.
                     * @param _endPointServiceId Endpoint service ID.
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VIP list of the endpoint.
                     * @return EndPointVipSet VIP list of the endpoint.
                     * 
                     */
                    std::vector<std::string> GetEndPointVipSet() const;

                    /**
                     * 设置VIP list of the endpoint.
                     * @param _endPointVipSet VIP list of the endpoint.
                     * 
                     */
                    void SetEndPointVipSet(const std::vector<std::string>& _endPointVipSet);

                    /**
                     * 判断参数 EndPointVipSet 是否已赋值
                     * @return EndPointVipSet 是否已赋值
                     * 
                     */
                    bool EndPointVipSetHasBeenSet() const;

                    /**
                     * 获取ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionCode ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionCode ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag key-value pair collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag key-value pair collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag key-value pair collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID.
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * Endpoint name.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service ID.
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VIP list of the endpoint.
                     */
                    std::vector<std::string> m_endPointVipSet;
                    bool m_endPointVipSetHasBeenSet;

                    /**
                     * ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Tag key-value pair collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTINFO_H_
