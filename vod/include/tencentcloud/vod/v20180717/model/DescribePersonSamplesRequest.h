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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribePersonSamples request structure.
                */
                class DescribePersonSamplesRequest : public AbstractModel
                {
                public:
                    DescribePersonSamplesRequest();
                    ~DescribePersonSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Pulled material type. Available values:</p><li>UserDefine: user-customized material library;</li><li>Default: system default material library.</li><p>Default value: UserDefine, pull user-customized material library materials.<br>Description: If pulling the system default material library, you can only pull via material name or material ID + material name, and only one facial features image is returned.</p>
                     * @return Type <p>Pulled material type. Available values:</p><li>UserDefine: user-customized material library;</li><li>Default: system default material library.</li><p>Default value: UserDefine, pull user-customized material library materials.<br>Description: If pulling the system default material library, you can only pull via material name or material ID + material name, and only one facial features image is returned.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Pulled material type. Available values:</p><li>UserDefine: user-customized material library;</li><li>Default: system default material library.</li><p>Default value: UserDefine, pull user-customized material library materials.<br>Description: If pulling the system default material library, you can only pull via material name or material ID + material name, and only one facial features image is returned.</p>
                     * @param _type <p>Pulled material type. Available values:</p><li>UserDefine: user-customized material library;</li><li>Default: system default material library.</li><p>Default value: UserDefine, pull user-customized material library materials.<br>Description: If pulling the system default material library, you can only pull via material name or material ID + material name, and only one facial features image is returned.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Material ID. Array length limit: 100.</p>
                     * @return PersonIds <p>Material ID. Array length limit: 100.</p>
                     * 
                     */
                    std::vector<std::string> GetPersonIds() const;

                    /**
                     * 设置<p>Material ID. Array length limit: 100.</p>
                     * @param _personIds <p>Material ID. Array length limit: 100.</p>
                     * 
                     */
                    void SetPersonIds(const std::vector<std::string>& _personIds);

                    /**
                     * 判断参数 PersonIds 是否已赋值
                     * @return PersonIds 是否已赋值
                     * 
                     */
                    bool PersonIdsHasBeenSet() const;

                    /**
                     * 获取<p>Material name. Array length limit: 20.</p>
                     * @return Names <p>Material name. Array length limit: 20.</p>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>Material name. Array length limit: 20.</p>
                     * @param _names <p>Material name. Array length limit: 20.</p>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>Material tag. Array length limit: 20.</p>
                     * @return Tags <p>Material tag. Array length limit: 20.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Material tag. Array length limit: 20.</p>
                     * @param _tags <p>Material tag. Array length limit: 20.</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Pulled material type. Available values:</p><li>UserDefine: user-customized material library;</li><li>Default: system default material library.</li><p>Default value: UserDefine, pull user-customized material library materials.<br>Description: If pulling the system default material library, you can only pull via material name or material ID + material name, and only one facial features image is returned.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Material ID. Array length limit: 100.</p>
                     */
                    std::vector<std::string> m_personIds;
                    bool m_personIdsHasBeenSet;

                    /**
                     * <p>Material name. Array length limit: 20.</p>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>Material tag. Array length limit: 20.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 100. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
