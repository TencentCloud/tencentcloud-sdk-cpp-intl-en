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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Pulled material type. Valid values:
<li>UserDefine: User-customized material library;</li>
<li>Default: Default sample library.</li>

Default value: UserDefine, pull user-customized material library materials.
Description: If you pull the system default material library, you can only use the material name or material ID + material name via pull, and the facial features image returns only one.
                     * @return Type Pulled material type. Valid values:
<li>UserDefine: User-customized material library;</li>
<li>Default: Default sample library.</li>

Default value: UserDefine, pull user-customized material library materials.
Description: If you pull the system default material library, you can only use the material name or material ID + material name via pull, and the facial features image returns only one.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Pulled material type. Valid values:
<li>UserDefine: User-customized material library;</li>
<li>Default: Default sample library.</li>

Default value: UserDefine, pull user-customized material library materials.
Description: If you pull the system default material library, you can only use the material name or material ID + material name via pull, and the facial features image returns only one.
                     * @param _type Pulled material type. Valid values:
<li>UserDefine: User-customized material library;</li>
<li>Default: Default sample library.</li>

Default value: UserDefine, pull user-customized material library materials.
Description: If you pull the system default material library, you can only use the material name or material ID + material name via pull, and the facial features image returns only one.
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
                     * 获取Material ID, with an array length limit of 100.
                     * @return PersonIds Material ID, with an array length limit of 100.
                     * 
                     */
                    std::vector<std::string> GetPersonIds() const;

                    /**
                     * 设置Material ID, with an array length limit of 100.
                     * @param _personIds Material ID, with an array length limit of 100.
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
                     * 获取Material name. Array length limit: 20.
                     * @return Names Material name. Array length limit: 20.
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Material name. Array length limit: 20.
                     * @param _names Material name. Array length limit: 20.
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
                     * 获取Material tag. Array length limit: 20.
                     * @return Tags Material tag. Array length limit: 20.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Material tag. Array length limit: 20.
                     * @param _tags Material tag. Array length limit: 20.
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
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
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
                     * 获取Number of returned entries. Default value: 100. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 100. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 100. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 100. Maximum value: 100.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Pulled material type. Valid values:
<li>UserDefine: User-customized material library;</li>
<li>Default: Default sample library.</li>

Default value: UserDefine, pull user-customized material library materials.
Description: If you pull the system default material library, you can only use the material name or material ID + material name via pull, and the facial features image returns only one.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Material ID, with an array length limit of 100.
                     */
                    std::vector<std::string> m_personIds;
                    bool m_personIdsHasBeenSet;

                    /**
                     * Material name. Array length limit: 20.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Material tag. Array length limit: 20.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 100. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESREQUEST_H_
