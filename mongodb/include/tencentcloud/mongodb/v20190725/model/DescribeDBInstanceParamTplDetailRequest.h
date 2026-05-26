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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParamTplDetail request structure.
                */
                class DescribeDBInstanceParamTplDetailRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceParamTplDetailRequest();
                    ~DescribeDBInstanceParamTplDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * @return TplId Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * 
                     */
                    std::string GetTplId() const;

                    /**
                     * 设置Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * @param _tplId Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     * 
                     */
                    void SetTplId(const std::string& _tplId);

                    /**
                     * 判断参数 TplId 是否已赋值
                     * @return TplId 是否已赋值
                     * 
                     */
                    bool TplIdHasBeenSet() const;

                    /**
                     * 获取Parameter name. Pass in this value to retrieve parameter details of this field. Leave it empty to return all parameters.
                     * @return ParamName Parameter name. Pass in this value to retrieve parameter details of this field. Leave it empty to return all parameters.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name. Pass in this value to retrieve parameter details of this field. Leave it empty to return all parameters.
                     * @param _paramName Parameter name. Pass in this value to retrieve parameter details of this field. Leave it empty to return all parameters.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                private:

                    /**
                     * Parameter template ID. Use the [DescribeDBInstanceParamTpl](https://www.tencentcloud.com/document/product/240/109155?from_cn_redirect=1) interface to obtain template ID.
                     */
                    std::string m_tplId;
                    bool m_tplIdHasBeenSet;

                    /**
                     * Parameter name. Pass in this value to retrieve parameter details of this field. Leave it empty to return all parameters.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEPARAMTPLDETAILREQUEST_H_
