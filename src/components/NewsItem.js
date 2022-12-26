
import React, { Component } from 'react'

export class NewsItem extends Component {
  render() {
    let {title, description, newsUrl, imageUrl} = this.props;
    return (
      <div>
        <div className="card" style= {{width: "18rem"}}>
                <img src={!imageUrl?"https://images.hindustantimes.com/img/2022/03/05/1600x900/ANI-20220304022-0_1646453698962_1646453706935.jpg":imageUrl} className="card-img-top" alt="..." />
                <div className="card-body">
                    <h5 className="card-title">{title}...</h5>
                    <p className="card-text">{description}...</p>
                    <a href={newsUrl} target="_blank" rel="noreferrer" className="btn btn-sm btn-dark">Read More</a>
                </div>
            </div>
        </div>
    )
  }
}

export default NewsItem
